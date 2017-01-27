#include <iostream>
#include <string.h>

using namespace std;

size_t stringlength(const char* src)
{
    size_t length = 0;
    while(src && *src != '\0')
    {
        length++;
        src++;
    }
    return length;
}

void replaceOccurences(char* str, char charToReplace, const char* stringToReplaceWith)
{
    size_t lenStr = stringlength(str);
    size_t lenReplacement = stringlength(stringToReplaceWith);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == charToReplace)
        {
            if(lenReplacement == 0)
            {
                // Empty string to replace, just erase the letter 
                for(int j = i; j < lenStr; ++j)
                {
                    str[j] = str[j+1];
                }
            }
            else
            {
                // Shift the letters from i-th position to the end 
                for(int j = lenStr - 1; j > i; j--)
                {
                    str[j + lenReplacement -1 ] = str[j];
                }
            }
           
            // Update the terminating zero
            str[lenStr -1 + lenReplacement] = '\0';
            
            // Replace the letter with the new string
            for(int j = 0; j < lenReplacement; ++j)
            {
                str[i+j] = stringToReplaceWith[j];
            }

            // Update the new length of the string
            if(lenReplacement == 0)
            {
                lenStr--;
            }
            else
            {
                i += lenReplacement;
                lenStr += lenReplacement;
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    const char* strInitial = "Merry Christmas";
    const char* strToReplaceWith = "Hohoho";
    size_t lenStr = stringlength(strInitial);
    size_t lenReplace = stringlength(strToReplaceWith);
    char* str = new char[lenStr * lenReplace + 1]; // In the worst sceanario we will replace every char with strToReplaceWith
    strcpy(str, strInitial);
    replaceOccurences(str, 'r', strToReplaceWith);
    cout << "The result string is : " << str << endl;
    delete[] str;
    return 0;
}
