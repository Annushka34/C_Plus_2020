//#include<iostream>
//#include<conio.h>
//#include<string>
//#include<direct.h>
//#include<stdio.h>
//#include<io.h>
//#include<Windows.h>
//
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//class A
//{
//public:
//	int age;
//	char name[50];
//};
//
//void ShowDir(char*path)
//{
//	char spec[] = "*.*";
//	char fullpath[100] = {};
//	strcpy_s(fullpath, 100, path);
//	strcat_s(fullpath, 100, spec);
//
//	_finddata_t *f = new _finddata_t;
//	int find = _findfirst(fullpath, f);
//	int i = find;
//	while (i != -1)
//	{
//		if (f->attrib& _A_SUBDIR && strcmp(f->name, ".") != 0 && strcmp(f->name, ".."))
//		{
//			cout << "\tDIR:";
//			cout << f->name << endl;
//			char path2[100];
//			strcpy_s(path2, 100, path);
//			strcat_s(path2, 100, f->name);
//			strcat_s(path2, 100, "\\");
//			ShowDir(path2);
//		}
//		else
//		{
//			cout << f->name << endl;
//		}
//		i = _findnext(find, f);
//	}
//	_findclose(find);
//	return;
//}
//
//void main()
//{
//	SetConsoleOutputCP(1251);
//	//char filename[] = "myFile.txt";
//	//char path[] = "D://new3";
//	//_mkdir(path);
//	//_getch();
//	//_rmdir(path);
//	//rename(path, "D://test1111111");
//
//
//	char path[] = "D://pictures/";
//	ShowDir(path);
//
//
//
//	//
//	//struct _finddata_t c_file; intptr_t hFile;
//	//// Find first .c file in current directory 
//	//if( (hFile = _findfirst( "*.*", &c_file )) == -1L ) 
//	//printf( "No *.c files in current directory!\n" ); 
//	//else { printf( "Listing of .c files\n\n" ); 
//	//printf( "RDO HID SYS ARC  FILE         DATE %25c SIZE\n", ' ' ); 
//	//printf( "--- --- --- ---  ----         ---- %25c ----\n", ' ' ); 
//	//do { char buffer[30]; 
//	// printf( ( c_file.attrib & _A_RDONLY ) ? " Y  " : " N  " ); 
//	// printf( ( c_file.attrib & _A_HIDDEN ) ? " Y  " : " N  " ); 
//	// printf( ( c_file.attrib & _A_SYSTEM ) ? " Y  " : " N  " );
//	// printf( ( c_file.attrib & _A_ARCH )   ? " Y  " : " N  " ); 
//	// ctime_s( buffer, _countof(buffer), &c_file.time_write ); 
//	// printf( " %-12s %.24s  %9ld\n", c_file.name, buffer, c_file.size ); } 
//	//while( _findnext( hFile, &c_file ) == 0 ); 
//	//
//	//_findclose( hFile ); 
//	//} 
//	_getch();
//}