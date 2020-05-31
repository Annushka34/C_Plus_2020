#include<iostream>
#define TASK 1
using namespace std;

#if(TASK == 2)

class MyString
{
	char *arr;
	int size;
public:
	MyString()
	{
		size = 0;
		arr = new char[size];
	}
	MyString(const char* parr)
	{
		size = strlen(parr) + 1;
		arr = new char[size];
		strcpy_s(arr, size, parr);
	}
	/*MyString( char* parr)
	{
		size = strlen(parr) + 1;
		arr = new char[size];
		strcpy_s(arr, size, parr);
	}*/
	void AddWord(const char * ar)
	{
		size += strlen(ar);
		char * temp = new char[size];
		strcpy_s(temp, strlen(arr) + 1, arr);
		strcat_s(temp, size, ar);
		delete[] arr;
		arr = temp;
	}

	void Show()
	{
		cout << arr << endl;
	}
	~MyString()
	{
		delete[] arr;
	}
};

void main()
{
	MyString str;
	MyString str1("Hello");
	char arr[255];
	cin >> arr;
	MyString str2(arr);
	str1.AddWord("world");
	str1.AddWord(".My name is.");
	str1.Show();
	cout << "Main ended\n";
}
#endif