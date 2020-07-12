//#include<iostream>
//#include <windows.h>
//using namespace std;
//
//int filter(int code, struct _EXCEPTION_POINTERS *ep) {
//
//	cout<<"in filter.";
//
//	if (code == EXCEPTION_ACCESS_VIOLATION) {
//
//		cout<<("caught AV as expected.");
//		return EXCEPTION_EXECUTE_HANDLER;
//	}
//	else {
//		cout<<("didn't catch AV, unexpected.");
//		return EXCEPTION_CONTINUE_SEARCH;
//	};
//}
//
//void main()
//{
//	int x, y = 5;
//	cout << "Enter x:";
//	cin >> x;
//
//	__try
//	{
//	cout << y / x;
//	}
//	__except (GetExceptionCode() == EXCEPTION_INT_DIVIDE_BY_ZERO)
//	{
//		cerr << "Error: line 15. Div by zero\n";
//	}
//
//	cin >> x;
//	int * ptr = nullptr;
//	__try
//	{
//		//cout << *ptr;
//		cout << "continue try...";
//		int*arr = new int[x];
//		delete[]arr;
//	}
//	__except (filter(GetExceptionCode(), GetExceptionInformation()))
//	{
//		cout << "Error: line 26. EXCEPTION_ACCESS_VIOLATION\n";
//	}	
//	cout << ".....MAIN CODE!!!!!!!!!!!!!!!\n";
//}