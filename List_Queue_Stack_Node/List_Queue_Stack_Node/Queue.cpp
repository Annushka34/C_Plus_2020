//#include<iostream>
//
//using namespace std;
//
//class MyQueue
//{
//	struct Node
//	{
//		int val;
//		Node* next;
//	};
//	Node* phead;
//	Node* ptail;
//	int size;
//public:
//	MyQueue()
//	{
//		phead = nullptr;
//		ptail = nullptr;
//		size = 0;
//	}
//
//	void Enqueue(int a)
//	{
//		Node* pnew = new Node();
//		pnew->val = a;
//
//		if (phead == nullptr)
//		{
//			pnew->next = nullptr;
//			ptail = pnew;
//			phead = pnew;
//		}
//		else
//		{
//			ptail->next = pnew;
//			ptail = pnew;
//		}
//		size++;
//	}
//
//	int Dequeue()
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
//	~MyQueue()
//	{
//		Clear();
//	}
//};
//
//void main()
//{
//	MyQueue q;
//	q.Enqueue(3);
//	q.Enqueue(8);
//	q.Enqueue(13);
//
//
//	int a = q.Dequeue();
//	cout << a << endl;
//	cout << "-------------------\n";
//	q.Show();
//}