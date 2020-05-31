#include"Header.h"
#define CONSTR 1

#if (CONSTR==2)

class MyString
{
private:
	char * arr;
	int _size;
public:
	MyString()
	{
		_size = 0;
		arr = new char[_size];
	}
	MyString(int size)
	{
		this->_size = size;
		arr = new char[size];
	}
	MyString(const char*arr)
	{
		this->_size = strlen(arr)+1;
		this->arr = new char[_size];
		strcpy_s(this->arr, _size, arr);
	}

	void AddWord(const char* w)
	{
		_size += strlen(w);
		char * temp = new char[_size];
		strcpy_s(temp, strlen(arr) + 1, arr);
		strcat_s(temp, _size, w);
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
	MyString str("Hello world");
	str.AddWord("....");
	str.AddWord("------------");
	str.Show();
	cout << "Main end!!!!!\n";
}


#endif //  CONSTR 2