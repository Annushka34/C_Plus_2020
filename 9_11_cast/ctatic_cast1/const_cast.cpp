#include<iostream>
#include<Windows.h>
using namespace std;
void func(double const&d)
{
	const_cast<double &>(d) = 10;
}
void func2()
{
	int i;
	const int * pi = &i;
	// *pi имеет тип const int,
	// но pi указывает на int, который константным не €вл€етс€
	int* j = const_cast<int *> (pi);
}

void Show(const char* name)
{
	//name[3] = 'h';
	char* ch = const_cast<char*>(name);
	ch[3] = 'g';
}

void main()
{
	int size = 10;
	//---константний вказ≥вник на константну зм≥нну
	const int* a = &size;
	//a = 10;
	int *b = const_cast<int*>(a);
	*b = 8;
	char* ch = new char[50];
	strcpy_s(ch, 50, "aaaaaa");
	Show(ch);
	cout << ch;
	system("pause");
}
