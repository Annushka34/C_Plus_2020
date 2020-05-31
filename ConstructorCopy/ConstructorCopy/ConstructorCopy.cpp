#include"Point.h"
#define TASK 1

#if(TASK == 2)

void Foo(Point p)//---1. передача в параметрах функції (виклик конструктор копій)
{
	cout << "Foo\n";
}
Point Foo()//---2. повернення з функції (виклик конструктор копій)
{
	Point p(33,12);
	cout << "Foo\n";
	return p;
}


void main()
{
	//Point p, p1;
	//p.Show();
	//Foo(p);
	//Point p2 = Foo();
	//p2.Show();
	//p2.ChangeName("STAR");
	//p2.Show();
	////p.Show();
	////p1.Show();

	////Point p1 = p;//--- 3. створення обєкту на основі іншого (виклик конструктор копій)
	////p.Show();

	//Point parr[3]{ Point(3,5,"Point 1"), Point(7,7, "Point 2"), Point(11,11,"Point 3") };
	//Point * p3 = new Point[3];//Не можна використати перевантажений конструктор
	//delete[] p3;

	Point ** p4 = new Point*[4];
	for (int i = 0; i < 4; i++)
	{
		char n[255]{"point_"};
		char buf[2];
		_itoa_s(i, buf, 10);
		strcat_s(n, buf);

		p4[i] = new Point(i + 1, i + 5, n);
	}
	for (int i = 0; i < 4; i++)
	{
		p4[i]->Show();
	}

	for (int i = 0; i < 4; i++)
	{
		delete p4[i];
	}
	delete p4;

	cout << "Main ended\n";
}
#endif