#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *inFile, *outFile;

	// Header structure
	typedef struct
	{
		unsigned short int Type;
		unsigned int Size;
		unsigned short int Reserved1, Reserved2;
		unsigned int Offset;
	} Header;

	// Info header structure
	typedef struct
	{
		unsigned int Size;
		int Width, Height;
		unsigned short int Planes;
		unsigned short int Bits;
		unsigned int Compression;
		unsigned int ImageSize;
		int xResolution, yResolution;
		unsigned int Colors;
		unsigned int ImportantColors;
	} InfoHeader;

	// Define pixel structure
	typedef struct
	{
		unsigned char Red;
		unsigned char Green;
		unsigned char Blue;
	} Pixel;

	Header *pHeader;
	InfoHeader *pInfoHeader;
	Pixel *pPixel, **pImage;

	int i, j;

	// Dynamically allocate memory for reading in and storing data
	pHeader = (Header *)malloc(sizeof(Header));
	pInfoHeader = (InfoHeader *)malloc(sizeof(InfoHeader));
	pPixel = (Pixel *)malloc(sizeof(Pixel));

	// Open input file
	inFile = fopen(argv[1], "rb");

	// Check if file is opened correctly
	if (inFile == NULL)
	{
		printf("Can't open input file for reading.\n");
		return 1;
	}

	// Open output file
	outFile = fopen(argv[2], "wb");

	// Check if file is opened correctly
	if (outFile == NULL)
	{
		printf("Can't open output file for writing.\n");
		return 1;
	}

	// Read in header structure
	fread(&pHeader->Type, sizeof(pHeader->Type), 1, inFile);
	fread(&pHeader->Size, sizeof(pHeader->Size), 1, inFile);
	fread(&pHeader->Reserved1, sizeof(pHeader->Reserved1), 1, inFile);
	fread(&pHeader->Reserved2, sizeof(pHeader->Reserved2), 1, inFile);
	fread(&pHeader->Offset, sizeof(pHeader->Offset), 1, inFile);

	// Write header structure to output
	fwrite(&pHeader->Type, sizeof(pHeader->Type), 1, outFile);
	fwrite(&pHeader->Size, sizeof(pHeader->Size), 1, outFile);
	fwrite(&pHeader->Reserved1, sizeof(pHeader->Reserved1), 1, outFile);
	fwrite(&pHeader->Reserved2, sizeof(pHeader->Reserved2), 1, outFile);
	fwrite(&pHeader->Offset, sizeof(pHeader->Offset), 1, outFile);

	// Read in info header structure
	fread(&pInfoHeader->Size, sizeof(pInfoHeader->Size), 1, inFile);
	fread(&pInfoHeader->Width, sizeof(pInfoHeader->Width), 1, inFile);
	fread(&pInfoHeader->Height, sizeof(pInfoHeader->Height), 1, inFile);
	fread(&pInfoHeader->Planes, sizeof(pInfoHeader->Planes), 1, inFile);
	fread(&pInfoHeader->Bits, sizeof(pInfoHeader->Bits), 1, inFile);
	fread(&pInfoHeader->Compression, sizeof(pInfoHeader->Compression), 1, inFile);
	fread(&pInfoHeader->ImageSize, sizeof(pInfoHeader->ImageSize), 1, inFile);
	fread(&pInfoHeader->xResolution, sizeof(pInfoHeader->xResolution), 1, inFile);
	fread(&pInfoHeader->yResolution, sizeof(pInfoHeader->yResolution), 1, inFile);
	fread(&pInfoHeader->Colors, sizeof(pInfoHeader->Colors), 1, inFile);
	fread(&pInfoHeader->ImportantColors, sizeof(pInfoHeader->ImportantColors), 1, inFile);

	// Write info header structure to output
	fwrite(&pInfoHeader->Size, sizeof(pInfoHeader->Size), 1, outFile);
	fwrite(&pInfoHeader->Height, sizeof(pInfoHeader->Width), 1, outFile);
	fwrite(&pInfoHeader->Width, sizeof(pInfoHeader->Height), 1, outFile);
	fwrite(&pInfoHeader->Planes, sizeof(pInfoHeader->Planes), 1, outFile);
	fwrite(&pInfoHeader->Bits, sizeof(pInfoHeader->Bits), 1, outFile);
	fwrite(&pInfoHeader->Compression, sizeof(pInfoHeader->Compression), 1, outFile);
	fwrite(&pInfoHeader->ImageSize, sizeof(pInfoHeader->ImageSize), 1, outFile);
	fwrite(&pInfoHeader->xResolution, sizeof(pInfoHeader->xResolution), 1, outFile);
	fwrite(&pInfoHeader->yResolution, sizeof(pInfoHeader->yResolution), 1, outFile);
    fwrite(&pInfoHeader->Colors, sizeof(pInfoHeader->Colors), 1, outFile);
	fwrite(&pInfoHeader->ImportantColors, sizeof(pInfoHeader->ImportantColors), 1, outFile);

	// Allocate memory for picture data
	pImage = (Pixel **)malloc(sizeof(Pixel *)* pInfoHeader->Height);
	for (i = 0; i < pInfoHeader->Height; i++)
	{
		pImage[i] = (Pixel *)malloc(sizeof(Pixel)* pInfoHeader->Width);
	}

    // Move offset with 69 bytes
	for (int padVal = 0; padVal < 69; padVal++)
	{
	   unsigned char var = 0;
	   fread(&var, sizeof(pPixel->Blue), 1, inFile);
	}

	// Read image data
	for (i = 0; i < pInfoHeader->Height; i++)
	{
		for (j = 0; j < pInfoHeader->Width; j++)
		{
			fread(&pImage[i][j].Red, sizeof(pPixel->Red), 1, inFile);
			fread(&pImage[i][j].Green, sizeof(pPixel->Green), 1, inFile);
			fread(&pImage[i][j].Blue, sizeof(pPixel->Blue), 1, inFile);
		}
	}

	// Move offset with 69 bytes
	for (int padVal = 0; padVal < 69; padVal++)
	{
	   unsigned char var = 0;
	   fwrite(&var, sizeof(pPixel->Blue), 1, outFile);
	}

	// Rotate to right
	if( argv[3][0] == 'r')
	{
	   // Transpose to the right
	   for( i = 0; i < pInfoHeader->Width; i++)
	   {
	      int width  = pInfoHeader->Width -i -1;
	      for( j = 0; j < pInfoHeader->Height ; j++)
	      {
	         fwrite(&pImage[j][width].Red, sizeof(pPixel->Green), 1, outFile);
		     fwrite(&pImage[j][width].Green, sizeof(pPixel->Red), 1, outFile);
	         fwrite(&pImage[j][width].Blue, sizeof(pPixel->Blue), 1, outFile);
  	      }

          // Each row needs to be a multiple of 4 bytes.  
          int pad = 0; // Set pad byte count per row to zero by default.
          if ((pInfoHeader->Height * 3) % 4 != 0)
	      {
	         pad = 4 - ((pInfoHeader->Height * 3) % 4); // 4 - remainder(width * 3 / 4).
	      }
	      unsigned char var = 0;
	      for (int padVal = 0; padVal < pad; padVal++)
	      {
	         fwrite(&var, sizeof(pPixel->Blue), 1, outFile);
	      }
	   }
	}
	else // Rotate to left
	{
	   // Transpose to the left
	   for( i = 0; i < pInfoHeader->Width; i++)
	   {
	      int height  = pInfoHeader->Height -1;
	      for( j = 0; j < pInfoHeader->Height ; j++)
	      {
	         fwrite(&pImage[height][i].Red, sizeof(pPixel->Green), 1, outFile);
		     fwrite(&pImage[height][i].Green, sizeof(pPixel->Red), 1, outFile);
	         fwrite(&pImage[height--][i].Blue, sizeof(pPixel->Blue), 1, outFile);
	      }

          // Each row needs to be a multiple of 4 bytes.  
          int pad = 0; // Set pad byte count per row to zero by default.
          if ((pInfoHeader->Height * 3) % 4 != 0)
	      {
	         pad = 4 - ((pInfoHeader->Height * 3) % 4); // 4 - remainder(width * 3 / 4).
	      }
	      unsigned char var = 0;
	      for (int padVal = 0; padVal < pad; padVal++)
	      {
	         fwrite(&var, sizeof(pPixel->Blue), 1, outFile);
	      }
	   }
	}
	
	// Close files and release memory
	fclose(inFile);
	fclose(outFile);
	free(pHeader);
	free(pInfoHeader);
	free(pPixel);
	free(pImage);

	return 0;
}
