#include<iostream>
#include<array>
#include<list>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

void main()
{
	//copy
	//find
	//search
	//merge
	//transform
	//count
	//accumulate

	array<int, 5> arr1{ 3,5,6,7,6 };
	array<int, 5> arr2{7,10,12,45 };
	array<int, 4>arrDest;
	vector<int> v(7, 6);
	vector<int> v1{ 6,7 };
	vector<int> vDest;
	vDest.resize(4);
	list<int> li{ 7,8,9,4,5,6 };
	//copy
	copy(arr1.begin(), arr1.end() - 1, arrDest.begin());
	copy(arr1.begin(), arr1.end(), ostream_iterator<int>(cout, "."));
	cout << "array destination:\n";
	copy(arrDest.begin(), arrDest.end(), ostream_iterator<int>(cout, "."));
	copy(arr1.begin(), arr1.end() - 1, vDest.begin());
	cout << "vector destination:\n";
	copy(vDest.begin(), vDest.end(), ostream_iterator<int>(cout, "."));
	cout << endl;

	//find
	array<int, 5>::iterator itF1=find(arr1.begin(), arr1.end(), 6);
	if (itF1 != arr1.end())
	cout <<"I find you!!! "<< *itF1<<"  you are on "<<itF1-arr1.begin()<<endl;

	auto itS=search(arr1.begin(), arr1.end(), v1.begin(), v1.end());
	if (itS != arr1.end())
	{
		cout << "pos " << itS-arr1.begin()<<endl;
	}
	cout << "\nsort\n";
	sort(arr1.begin(), arr1.end());
	copy(arr1.begin(), arr1.end(), ostream_iterator<int>(cout, "."));
	cout << endl;
	copy(arr2.begin(), arr2.end(), ostream_iterator<int>(cout, "."));
	sort(arr2.begin(), arr2.end());
	//vDest.clear();
	array<int, 10> arrDest1;
	merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arrDest1.begin());
	cout << endl;
	copy(arrDest1.begin(), arrDest1.end(), ostream_iterator<int>(cout, "."));

	//transform(arr1.begin(), arr1.begin())+3, ostream_iterator<int>(cout,"."))
	cout<<"\ncount "<<count(arr1.begin(), arr1.end(), 6);
}