//#include"Arr.h"
//
//class Num
//{
//private:
//	int x;
//public:
//	Num(int a)
//	{
//		x = a;
//	}
//	void operator++ ()
//	{
//		++x;
//	}
//	void operator++ (int a)
//	{		
//		x++;
//	}
//
//	/*void SetX(int a)
//	{
//		x = a;
//	}*/
//
//	void operator()(int a)
//	{
//		x = a;
//	}
//	friend ostream& operator<< (ostream& out, Num& n);
//};
//ostream& operator<< (ostream& out, Num& n)
//{
//	out << n.x<<endl;
//	return out;
//}
//
//
//
//
//
//void main()
//{
//	srand(time(0));
//	SetConsoleOutputCP(1251);
//	/*Num n1(5);
//	++n1;
//	n1++;
//	cout << n1;
//
//	n1(33);
//	cout << n1;
//	n1(15);
//	cout << n1;*/
//
//	Arr arr1(5);//   size = 1, max size = 255
//	arr1(10);//  add element 10 to array
//
//	int temp[]{ 3,7,8,11 };
//	arr1(temp, 4);//   add 4 elements to array, size = 5
//
//	cout << arr1;
//	arr1--;//   remove last element
//
//	cout << arr1;
//
//	//----ACSESS BY INDEX----
//	cout << arr1[2] << endl;
//	arr1[3] = 100;
//	arr1[10] = 100;
//	cout << arr1;
//
//	//----ACSESS BY INDEX (CHAR * )----
//	cout << arr1["ivanov"];
//
//	// ++ -- () [] *-> new delete 
//}