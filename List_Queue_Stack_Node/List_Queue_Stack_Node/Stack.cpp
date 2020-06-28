//#include<iostream>
//
//using namespace std;
//
//class MyStack
//{
//	struct Node
//	{
//		int val;
//		Node* next;
//	};
//	Node* phead;
//	int size;
//public:
//	MyStack()
//	{
//		phead = nullptr;
//		size = 0;
//	}
//
//	void Push(int a)
//	{
//		Node* pnew = new Node();
//		pnew->val = a;
//
//		if (phead == nullptr)
//			pnew->next = nullptr;
//		else
//			pnew->next = phead;
//
//		phead = pnew;
//		size++;
//	}
//
//	int Pop()
//	{
//		if (phead == nullptr)
//		{
//			cout << "stack is empty\n";
//			return -1;
//		}
//		int val = phead->val;
//		Node* pdel = phead;
//		phead = phead->next;
//		delete pdel;
//		size--;
//		return val;
//	}
//
//	
//
//	void Show()
//	{
//		Node* cur = phead;
//		while (cur != nullptr)
//		{
//			cout << cur->val << endl;
//			cur = cur->next;
//		}
//	}
//
//	void Clear()
//	{
//		if (phead != nullptr)
//		{
//			Node* del = phead;
//			while (del != nullptr)
//			{
//				phead = phead->next;
//				delete del;
//				del = phead;
//			}
//		}
//	}
//
//	~MyStack()
//	{
//		Clear();
//	}
//};
//
//void main()
//{
//	MyStack stack;
//	stack.Push(3);
//	stack.Push(8);
//	stack.Clear();
//
//	stack.Push(11);
//
//	/*int a = stack.Pop();
//	cout << a << endl;
//	a = stack.Pop();
//	cout << a << endl;
//	a = stack.Pop();
//	cout << a << endl;
//	a = stack.Pop();
//	cout << a << endl;*/
//
//	cout << "-------------------------------\n";
//	stack.Show();
//}