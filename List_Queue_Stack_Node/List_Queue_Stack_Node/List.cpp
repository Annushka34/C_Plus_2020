//#include<iostream>
//
//using namespace std;
//
//class List
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
//	List()
//	{
//		phead = nullptr;
//		ptail = nullptr;
//		size = 0;
//	}
//
//	void AddInTail(int a)
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
//	void AddInHead(int a)
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
//			pnew->next = phead;
//			phead = pnew;
//		}
//		size++;
//	}
//
//	void AddInPos(int a, int pos)
//	{
//		pos--;
//		Node* pnew = new Node();
//		pnew->val = a;
//
//		if (phead == nullptr)
//		{
//			pnew->next = nullptr;
//			ptail = pnew;
//			phead = pnew;
//			size++;
//			return;
//		}
//
//		if (pos <= 0)
//		{
//			AddInHead(a);
//			return;
//		}
//		if (pos >= size)
//		{
//			AddInTail(a);
//			return;
//		}
//
//
//		Node* pcur = phead;
//		
//		while (pos != 0)
//		{
//			pos--;
//			pcur = pcur->next;
//		}
//
//		pnew->next = pcur->next;
//		pcur->next = pnew;
//		size++;
//	}
//
//	int PopFromTail()
//	{
//		if (phead == nullptr)
//		{
//			cout << "stack is empty\n";
//			return -1;
//		}
//		if (ptail == phead)
//		{
//			int val =  phead->val;
//			delete phead;
//			phead = nullptr;
//			ptail = nullptr;
//			return val;
//		}
//		int val = ptail->val;
//		Node* pdel = ptail;
//		Node* pCur = phead;
//		while (pCur->next != ptail)
//		{
//			pCur = pCur->next;
//		}
//		delete pdel;
//		ptail = pCur;
//		ptail->next = nullptr;
//		size--;
//		return val;
//	}
//
//	int PopFromHead()
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
//	~List()
//	{
//		Clear();
//	}
//};
//
//void main()
//{
//	List q;
//	q.AddInHead(3);
//	q.AddInTail(8);
//	q.AddInHead(13);
//	q.AddInTail(18);
//	cout << "-------------------\n";
//	q.Show();
//	cout << "-------------------\n";
//
//	int a = q.PopFromHead();
//	cout << "head: " << a << endl;
//
//	a = q.PopFromTail();
//	cout << "tail: "<< a << endl;
//	cout << "-------------------\n";
//	q.Show();
//	cout << "-------------------\n";
//
//	q.AddInPos(100, 2);
//	q.AddInPos(55, 1);
//	q.AddInPos(111, 0);//111 55 3 8 100
//	q.AddInPos(333, 2);
//	q.Show();
//}