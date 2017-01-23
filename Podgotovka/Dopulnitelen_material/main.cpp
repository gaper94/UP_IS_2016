#include <iostream>
using namespace std;

#if 0 // START Променливи

// 1

// Променливи не могат да бъдат със същото
// име като ключовите думи в езика
int break = 2017;
cout << break;

// 2
 
// Имената на променливите не могат да започват
// с цифри
long int 2017b = 1234;
cout << 2017b;

// 3
// Валиден запис, промелнива може да започва с долна черта
void underscore()
{
	int _ = 2000;
	int __ = 17;
	int ___;
	___ = _ + __;
	cout << ___;
}

// 4
// Невалиден запис - в записа не може да се
// съдържат други символи освен букви от латинската азбука,
// цифри и долна черта
int get-avg(int max-val, int min-val)
{
	return (max-val + min-val) / 2;
}

// 5
// Не може да има променливи
// с едно и също име в един блок
void locScope()
{
	int xyz = 20;
	int xyz;
}

// 6
// Локалните променливи/имена скриват глобалните
int x = 41;
int giveX()
{
	int x = 123;
	{
		return x; // Функцията ще върне като резултат 123, защото х дефиниран 
		          // в блокът на фунцкията скрива глобалната променлива със стойност 41
	}
}

// 7
int giveX2()
{
	int x = 123;
	{
		extern int x;
		return x; // Тук функцията ще ни върне 41, защото със 'extern int x' сме казали на компилатора, че има 
		          // външна променлива с това име, която не е дефинирана в блокът на функцията
		          // и линкерът ще я търси в друг блок(спокойно може да закоментираме  'int x = 123')
	}
}

// 8
void caseSensitive()
{
	int VAR = 10;	   // Променливите в С/С++ са чувствителни към малките и големите букви
	printf("%d", var); //  VAR и var са две различни имена
}

// 9
#include <stdio.h>
void mac()
{
	// Тук EOF макрос дефиниран в stdio.h по следният начин
	// #define EOF     (-1)
	int EOF = 123; // Това означава, че след като мине предпроцесора
	               // 'int EOF = 123;' ще изглежда по следният начин => int (-1) = 123
	               // Ще получим компилационна грешка, защото левият операнд на оператора '='
	               // трябва да бъде стойност на която може да променим стойността (lvalue)
}

// 10
int main()
{
	int main = 2017;
	cout << main; // Тук локалната променлива 'int main' скрива
			      // по-глобалното име (функцията int main())
	main();       // Поради тази причина и не можем да извикаме
	              // функцията main() (да, можем да извикаме рекурсивно main функцията)
	              // защото в този блок тя е целочислена променлива
	return 0;
}

// 11
void printSizes()
{
	double dDouble = 2.0;
	int  nInteger = 5;
	cout << sizeof(!dDouble) << endl; // Отрицанието на число е израз от булев тип => 1 байт
	cout << sizeof(15 / dDouble) << endl; // Правилото, когато се извършват операции между променливи с различен
	                                      // тип е, че изразът се преобразува до по-големият от двата типа - в случаят
	                                      // '15 / dDouble' се преобразува до тип double => 8 байта
	cout << sizeof(nInteger = 15 / dDouble) << endl; // '15 / dDouble' се преобразува до тип double
	                                                 // след което се преобразува до типа на nInteger: 
                                                     // int => 4 байта (типичен пример за загуба на точност)
	 
}

// 12
int gnInteger;
void static1()
{
	int a;
	cout << a << endl; // На VC2013 дава компилационна грешка, употреба на неинициализирана променлива

	static int b; // Статичните и глоблните се инициализират винаги със стойност  по подразбиране
	              // (за int и като цяло вградените типове стойността е нула), ако изрично не им дадем стойност
	cout << b << endl; // Изпечатва 0

	cout << gnInteger << endl; // Също изпечатва 0
}

// 13
void defaultType()
{
	// В зависимост от компилатора е позволено да изпуснем
	// типа на променливата, той приема че типът по подразбиране е int
	short a = 10;
	static b = 10;
	unsigned c = 10;
	const d = 10;
}

// 14
void expRes()
{
	long double a;
	signed char b;
	int arr[sizeof(!a + b)]; // Резултата от събирането на булев израз (!a) + символ (b) е цяло число => 4 байта
	cout << sizeof(arr); // => 16 байта
	cout << typeid(!a + b).name(); // Ако се чудим за типа на даден израз може да използваме операторът typeid
}

// 15
void manyPluses()
{
	int x = 0;
	int z = x+++1; // Този израз се интерпретира по следният начин: (x++)+1 => z = 1
	               // х++ - извлечи и увеличи
	               // ++х - увеличи и извлечи

	int n = 1;
	z = x++++++n; // Този израз се интерпретира по следният начин: ((x++)++)+1 => z = 1
	              // (x++) връща като резултат временна променлива (това е и причината в горният пример z да има стойност 1)
	              // на която не може да вземем адреса (rvalue) и върху нея не можем да извършим операцията ++
}



#endif // END Променливи


#if 0 // START Условни оператори

// 1
void comp1()
{
	float a = 0.7; // 0.7 е тип float и се представя в памета като следното число: 0.699999988
	if (a<0.7){ // 0.7 е тип double и се представя в памета като следното число: 0.69999999999999996
		        // 0.7f < 0.7 се оценява като истина
		printf("a < 0.7");
	}
	else{
		printf("a > 0.7 || a == 0.7");
	}
}
void comp2()
{
	float a = 0.7;
	if (a < 0.7f){ // Правилен начин да сравним тези числа
		printf("a < 0.7");
	}
	else{
		printf("a > 0.7 || a == 0.7");
	}
}

// 2
void makeSelection()
{

	unsigned char c = 250;
	switch (c)
	{
		cout << "Start\n"; // Парче код, който няма да се изпълни никога
		case 250:
		{
			cout << "case 250\n"; // Забравили сме break
		}
		case 249:
		{
			cout << "case 249\n"; // Тук също
		}
		default:
		{
			cout << "default case\n"; // И тук също, освен ако не искаме да се изпълни 
			                          // кодът отдолу
		}
			cout << "End\n";
	}
}

// 3
void zeroSwitch()
{
	// В switch-case конструкция не може да имаме дублиращи се случаи
	switch (0X0)
	{
		case NULL: // NULL е дефиниран по следният начин => '#define NULL  0'
		{
			cout << "VW Passat\n";
			break;
		}
		case '\0': // Друг запис за нула
		{
			cout << "VW Golf\n";
			break;
		}
		case 0: // Нормален запис на нула
		{
			cout << "VW Jetta\n";
			break;
		}
		case 00: // Още един начин да запишем нулата
		{
			cout << "VW Scirocco\n";
			break;
		}
		default: 
		{
			cout << "VW Polo\n";
		}
	}
}

// 4
void allMenMustDie()
{
	int a = 256;
	if (a > 255 && ++a) // a > 255 е вярно, след което се проверява изразът отдясно => ++a = 257, различен
		                // от нула, следователно се оценя като истина и съобщението се изпечатва
	{
		cout << "Valar morghulis\n";
	}
}

// 5
void allMenMustObey()
{
	int b = 16;
	if (b > 16 || b++)
	{
		cout << "Valar dohaeris\n";
	}
}

// 6
void starks()
{
	int d = 512;
	if (d > 512 && ++d)
	{
		cout << "King of the north\n";
	}
}

// 7
void sayStarkWords()
{
	int c = 0;
	if (c >= 0 && c++)
	{
		cout << "Winter is coming\n";
	}
}

// 8
void khaleesi()
{
	int e = 1024;
	if (e = !512 ? 1024 : !(256 - 2 * 16 * 8))
	{
		cout << "Where are my dragons ???\n";
	}
}

// 9
void selectValue()
{
	int x;
	x = 10, 20, 30;
	cout << "The value of x is : " << x << endl;
}

#endif // END Условни оператори

#if 0 // START Цикли

// 1
void toDoOrNotToDo()
{
	int i = 0;
	do
	{
		cout << i;
		i++;
	} while (5, 4, 3, 2, 1, 0);
}

// 2
void octRange()
{
	for (int i = 0; i < 011; i++)
	{
		cout << i << endl;
	}
}

// 3
void printer()
{
	int i, j;
	i = j = 2, 3;
	while (--i&&j++)
		cout << i << j << endl;
}

// 4
void minusRange()
{
	int i;
	for (i = -5; i = 5; i = -5) 
	{
		cout << i << endl;
		if (i != -5) break;
	}
}

// 5
void print5Times()
{
	for (int i = 0; i <= 5; i++);
		cout << i << endl;
}


// 6
int val(){
	int static num = 10;
	return num--;
}

void staticValues()
{
	for (val(); val(); val()) 
	{
		cout << val();
	}
}

// 7
void drinkBeer()
{
	bool sober = false;
	unsigned char beer = 0;
	while (sober)
	{
		beer++;
	}
}

void drinkBeer2()
{
	bool sober = false;
	unsigned char beer = 0;
	do
	{
		beer++;
	} while (sober);
}

void drinkBeer3()
{
	bool sober = true;
	unsigned char beer = 0;
	while (sober)
	{
		beer++;
	}
}

// 8
void endlessC++Love()
{
	for (int i = 0, j = 0; j < 20, i < 10; ++i, j += 3)
	{
		cout << "We like C++\n";
	}
	
	for (int i = 0, j = 0; i < 10, j < 20; ++i)
	{
		cout << "We love C++\n";
	}
}

// 9
void findTheForce()
{
	for (unsigned char i = 0; i < 256; i++)
	{
		cout << "I find your lack of bits disturbing\n";
	}
}

// 10
void printOdd()
{
	// Print odd numbers in the range [1, 10]
	int number = 1;
	while (number <= 10)
	{
		if (number % 2 == 0) continue;
		cout << number << endl;
		number++;
	}
}

// 11
void printEven()
{
	int number = 1;
	// Print even numbers from in the range [1, 5]
	for (;;)
	{
		if (number > 5);
		break;

		if (number % 2 == 0)
		{
			cout << number << endl;
		}
		number++;
	}
}

// 12
void doPrint()
{
	int i = 0;
	do
	{
		cout << i;
		i++;
	} while (5, 4, 3, 2, 1, 0);
}

// 13
int countLoops()
{
	int counter = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				for (int n = 0; n < 2; n++)
				{
					for (int l = 0; l < 0; l++)
					{
						counter++;
					}
				}
			}
		}
	}
	return counter;
}

#endif // END Цикли

#if 0 // START Масиви

// 1
void strangeIt()
{
	int arr[] = { 1, 2, 3, 4 };
	for (int i = 0; i < 4; i++)
	{
		cout << i[arr] << endl;
	}
}

// 2
void printArrays()
{
	static int arr1[2] = { 1, 2 };
	static int arr2[2] = { 3, 4 };

	for (int i = 0; i < 4; i++)
	{
		cout << arr1[i] << endl;
	}

	int arr3[2] = { 1, 2 };
	int arr4[2] = { 3, 4 };

	for (int i = 0; i < 4; i++)
	{
		cout << arr3[i] << endl;
	}
}

// 3
void strangeIdx()
{
	int arr[105] = { 0 };
	cout << arr['c'];
	cout << arr['c++'];
}

// 4
void strangeIdx2()
{
	int i = 0;
	while (putchar(i++["Kude me slojiha??"]));
}

// 5
void countOcenki()
{
	int ocenki[10] = { 6, 2, 4, 5, 4, 5, 6, 5, 3, 3 };
	int broiOtlichnici = 0;
	int broiSkusani = 0;
	for (int i = 0; i < 10; i++)
	{
		if (ocenki[i] = 6)
		{
			broiOtlichnici++;
		}
		else if (ocenki[i] = 2)
		{
			broiSkusani++;
		}
	}
	cout << "Broi otlichni studenti: " << broiOtlichnici << endl;
	cout << "Broi skusasni studenti: " << broiSkusani << endl;
}

#endif // END Масиви

#if 0 // START Низове

// 1
void readFromConsole()
{
	char str[100] = { 0 };
	cin >> str;
	cout << str;

	char str[100] = { 0 };
	cin.getline(str, 100);
	cout << str;
}

// 2
void print()
{
	char *ptr = "We love C++";
	cout << -3[ptr] << endl;
}

// 3
// 1. char* ptr   = "Hello world"
// 2. char ptr[]  = "Hello world"

#endif // END Низове

#if 0 // START Указатели и псевдоними
// 1
void ref()
{
	int a = 5;
	int&b = a;
	b = 10;
	cout << a;
}

// 2
void foo(int* a)
{
	static int b = 4;
	a = &b;
}

void bar(int** a)
{
	static int b = 4;
	*a = &b;
}

void ptrsTest()
{
	int* ptr1 = NULL;
	foo(ptr1);
	cout << *ptr1;
	
	int* ptr2 = NULL;
	bar(&ptr2);
	cout << *ptr2;
}

// 3
int chunky()
{
	int a = 0;
	return a++;
}

int bacon()
{
	static int a = 0;
	return a++;
}

void chunkyBacon()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "Result from call " << i << " of chunky() : " << chunky() << endl;
		cout << "Result from call " << i << " of bacon() : " << bacon() << endl;
	}
}

// 4
void arrSize(int arr[])
{
	cout << "Size of arr[] (function call) is : " << sizeof(arr) << endl;
}

void checkSize()
{
	int arr[10]
	cout << "Size of arr[] is : " << sizeof(arr) << endl;
	arrSize();
}

#endif // END Указатели и псевдоними

// TO DO!
// lvalue vs rvalue, loss of precision, '.' vs ','
// implicit vs explicit casting, global variables