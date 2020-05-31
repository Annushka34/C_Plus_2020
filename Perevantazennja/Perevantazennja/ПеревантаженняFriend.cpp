#include"Point.h"

void main()
{
	srand(time(0));
	SetConsoleOutputCP(1251);
	
	Point p1(10, 30);
	Point p2(3, 0);
	p1.Show();
	p2.Show();
	Point p3 = p1 - p2;
	p3.Show();

	Point p4;
	p4 = p3;
	p4.Show();

	//* / + - (*) () [] -> > < == <= >= ! != << >> new delete 
}