//#include<stack>
//#include<iostream>
//#include<iterator>
//#include<algorithm>
//using namespace std;
//class My
//{
//	int x;
//public:
//	My()
//	{
//		x = 0;
//	}
//	My(int a)
//	{
//		x = a;
//	}
//	My(My&m)
//	{
//		x = m.x;
//	}
//	friend ostream& operator <<(ostream &out, My &m)
//	{
//		out << "x="<<m.x << endl;
//		return out;
//	}
//};
//
//void main()
//{
//	stack<int> myStack;
//	myStack.emplace(5);
//	cout<<myStack.size();
//	myStack.push(3);
//	myStack.push(8);
//	int a= (myStack.top());
//	cout << a;
//
//	My m(5);
//	cout << m;
//	stack<My>st;
//	st.emplace(m);
//	st.emplace(m);
//	st.emplace(m);
//	cout<<st.top();
//	st.pop();
//	cout << st.size();
//	cout << st.top();
//	cout << st.size();
//	cout << st.top();
//	cout << st.size();
//	
//	system("pause");
//}