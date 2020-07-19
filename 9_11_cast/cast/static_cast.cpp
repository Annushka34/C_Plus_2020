#include<iostream>
using namespace std;


void main()
{
	int a = 10;
	int b = 3;
	double d = (double)a;
	double c = b;
	c = (int)d;
	double*m = new double(5);
	char*mc = (char*)m;
	*mc = 'a';
	cout << *mc;
}