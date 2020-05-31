#include"Point.h"
#define TASK 1

#if(TASK == 1)

void Foo()
{
	static int a = 0;
	a++;
	cout << a << endl;
}


void main()
{
	/*for (int i = 0; i < 10; i++)
	{*/
		////Foo();
		//static int x = 0;
		//x++;
		//cout << x << " ";
		Point p;
		Point p1;
		Point p2;
		Point * p3 = new Point();
		cout << p.counter << endl;
		cout << p1.counter << endl;
		cout << p2.counter << endl;
		cout <<"counter = "<< Point::counter << endl;
		delete p3;
		cout << "counter = " << Point::counter << endl;
	//}
}
#endif