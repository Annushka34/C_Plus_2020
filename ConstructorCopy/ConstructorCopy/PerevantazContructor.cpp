#include"Point.h"
#define TASK 2

#if(TASK == 1)

void Foo()
{
	Point *p = new Point();
}

void main()
{
	//Foo();
	Point p;
	Point p1(5, 10, "point 1");
	Point p2(10, 10);
	p.Show();
	p1.Show();
	p2.Show();
	/*Point * p = new Point();
	p->Show();
	delete p;*/

	/*Point * p = new Point[3];
	delete[] p;*/


	cout << "Main ended\n";
}
#endif