//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<array>
//#include<list>
//using namespace std;
//
//void main()
//{
///*
//find()
//count()
//equal()
//search()
//copy()
//swap()
//iter_swap()
//fill()
//sort()
//merge()
//accumulate()
//for_each()*/
//
//	cout << "//------------find" << endl;
//	array<int,6> arr={ 1,5,7,9,2,5 };
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//	array<int,6>::iterator itA=find(arr.begin(), arr.end(), 10);
//	if(itA!=arr.end())
//	cout <<*itA<<" pos - "<< itA- arr.begin()<<endl;
//	itA = find(arr.begin(), arr.end(), 5);
//	if (itA != arr.end())
//		cout << *itA << " pos - " << itA - arr.begin() << endl;
//
//	cout << "//-----------count" << endl;
//	cout<<"number 5  - "<<count(arr.begin(), arr.end(), 5)<<" times\n";
//	cout << "number 6  - " << count(arr.begin(), arr.end(), 6) << " times\n";
//
//	cout << "\n//------------sort" << endl;
//	sort(arr.begin(), arr.end());
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ","));
//
//	cout<<"\n//--------------search"<<endl;
//	vector<int> v{ 2,5,5 ,3,6};
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//	auto itS=search(arr.begin(), arr.end(), v.begin()+1, v.begin() + 3);
//	if(itS!=arr.end())
//	cout << itS-arr.begin();
//
//	cout << "\n//-------------------merge\n";
//	array<int,9> dest;
//	array<int,3> arr1{ 7,7,6 };
//	sort(arr1.begin(), arr1.end());
//	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//	copy(arr1.begin(), arr1.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//
//	merge(arr.begin(), arr.end(), arr1.begin(), arr1.end(), dest.begin());
//	//merge()
//	cout << "destination arr (arr+arr1) \n";
//	copy(dest.begin(), dest.end(), ostream_iterator<int>(cout, ","));	
//	sort(v.begin(), v.end());
//	cout << "\nvector \n";
//	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//	cout << "destination arr (v+arr) \n";
//	merge(v.begin(), v.end(), arr1.begin(), arr1.end(), dest.begin());
//	copy(dest.begin(), dest.end(), ostream_iterator<int>(cout, ","));
//	cout << endl;
//
//
//	cout << "\ncopy\n";
//	vector<int> v3(3);
//	copy(v.begin(), v.begin() + 3, v3.begin());
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, ","));
//	//v3.resize(6);
//	copy(v.begin(), v.begin() + 3, back_inserter(v3));
//	cout << endl;
//	copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, ","));
//	//copy(v.begin(), v.begin() + 3, front_inserter(v3));//mistake for vector
//	list<int> l1{ 1,2,5 };
//	list<int> l2{ 7,8,9 };
//	copy(l1.begin(),l1.end(), back_inserter(l2));
//	cout << "\nlist  back_inserter\n";
//	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ","));
//	copy(l1.begin(), l1.end(), front_inserter(l2));
//
//
//	cout << "\nlist  front_inserter\n";
//	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ","));
//	l1.assign(3, 1);
//	list<int>::iterator li = l2.begin();
//	li++;
//	copy(l1.begin(), l1.end(), inserter(l2, li));
//
//
//	cout << "\nlist  inserter\n";
//	copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, ","));
//}