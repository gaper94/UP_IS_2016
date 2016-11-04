bool sober = false;
unsigned char beer = 0;
while (sober)
{
	beer++;
}

bool sober = false;
unsigned char beer = 0;
do
{
	beer++;
} while (sober);

bool sober = true;
unsigned char beer = 0;
while (sober)
{
	beer++;
}

for (int i = 0, j = 0; j < 20, i < 10; ++i, j += 3 )
{
	cout << "We like C++\n";
}

for (int i = 0, j = 0; i < 10, j < 20; ++i )
{
	cout << "We love C++\n";
}

for (unsigned char i = 0; i < 256; i++)
{
	cout << "I find your lack of bits disturbing\n";
}