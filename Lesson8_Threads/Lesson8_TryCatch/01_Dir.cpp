//#include<iostream>
//#include<io.h>
//#include<direct.h>
//#include<Windows.h>
//
//using namespace std;
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	_finddata_t* f = new _finddata_t;
//	char path[] = "D:/*.*";
//
//	int find =  _findfirst(path, f);
//
//	int i = find;
//	while (i != -1)
//	{
//		i = _findnext(find, f);
//		if(!(f->attrib&_A_SUBDIR))
//		cout << f->name << endl;
//	}
//	_findclose(find);
//}