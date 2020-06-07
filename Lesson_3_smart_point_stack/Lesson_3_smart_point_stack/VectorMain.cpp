//#include"Header.h"
//#include<vector>
//
//#include"MyClass.h"
//
//
//void main()
//{
//	//int arr[1000]{2,5,8,10};
//	vector<int> varr({ 2,8,7 });//   initializer list
//	vector<int> varr2(10);//   size = 10, all elements garbige
//
//	varr[2] = 10;
//	int a = varr.at(2);
//	cout << a << endl;
//
//	varr.push_back(11);// put in the end
//	varr.swap(varr2);//   change two vectors
//
//	for (int i = 0; i < varr.size(); i++)
//	{
//		varr[i] = i;
//		cout << varr[i] << " ";
//	}
//	cout << endl;
//	//   foreach   
//	for (auto el : varr)// el => varr[i], el => its only name
//	{
//		cout << el << " ";
//		//el = 10;  can't do this!!!
//	}
//
//	cout << endl;
//	cout << varr.back();
//
//
//	cout << "Capacity: " << varr.capacity() << endl;
//	varr.push_back(30);
//	cout << "Size: " << varr.size() << endl;
//	cout << "Capacity: " << varr.capacity() << endl;
//	varr.push_back(30);
//	varr.push_back(30);
//	varr.push_back(30);
//	varr.push_back(30);
//	cout << "Capacity after add 4: " << varr.capacity() << endl;
//	varr.push_back(30);
//	cout << "Capacity after add 1: " << varr.capacity() << endl;
//	varr.shrink_to_fit();
//	cout << "Capacity after shrink_to_fit: " << varr.capacity() << endl;
//
//
//
//	//---------------------------
//	vector<MyClass> mvec(2);//  MyClass obj1, obj2 => MyClass arr[2];
//	vector<MyClass*> mvec_two(2);//  MyClass * ptr1, ptr2 => MyClass * arr = new MyClass[2];
//	mvec_two.push_back(new MyClass());
//
//	mvec[0].Show();
//}