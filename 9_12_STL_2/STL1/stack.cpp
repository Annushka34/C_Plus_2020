//#include<stack>
//#include<iostream>
//
//using namespace std;
//class Point {
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = rand() % 10;
//		y = rand() % 10;
//	}
//	friend ostream &operator << (ostream& out, Point &p)
//	{
//		cout << "x=" <<p.x<<endl;
//		cout << "y=" << p.y << endl;
//		return out;
//	}
//};
//
//void main()
//{
//	stack<int> s;
//	for (size_t i = 0; i < 7; i++)
//	{
//		s.push(i);
//	}
//	cout<<"size "<<s.size() << endl;
//	for (size_t i = 0; i < 7; i++)
//	{
//		cout << s.top()<<" ";
//		s.pop();		
//	}
//
//	s.emplace(3);
//	cout<<s.top();
//	cout << "size " << s.size() << endl;
//
//	stack<Point> s1;
//	Point p, p1, p2;
//	
//	s1.emplace(p);
//	s1.emplace(p1);
//	s1.emplace(p2);
//
//	cout<<s1.top();
//	s1.pop();
//	cout << s1.top();
//	s1.pop();
//	cout << s1.top();
//
//	system("pause");
//}