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
//		Node* prev;
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
//		pnew->next = nullptr;
//		pnew->prev = nullptr;
//
//		if (phead == nullptr)
//		{			
//			ptail = pnew;
//			phead = pnew;
//			size++;
//			return;
//		}
//
//			ptail->next = pnew;
//			pnew->prev = ptail;
//			ptail = pnew;
//
//		size++;
//	}
//
//	void AddInHead(int a)
//	{
//		Node* pnew = new Node();
//		pnew->val = a;
//		pnew->next = nullptr;
//		pnew->prev = nullptr;
//
//		if (phead == nullptr)
//		{
//			ptail = pnew;
//			phead = pnew;
//			size++;
//			return;
//		}
//
//			pnew->next = phead;
//			phead->prev = pnew;
//			phead = pnew;
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
//		pnew->prev = pcur;
//		pnew->next = pcur->next;
//
//		pcur->next->prev = pnew;
//		pcur->next = pnew;
//		size++;
//	}
//
//	int DelByVal(int a)
//	{
//		if (phead == nullptr)
//		{
//			cout << "stack is empty\n";
//			return -1;
//		}
//		Node* pdel = phead;
//		int val = -1;
//
//		while (pdel != nullptr)
//		{
//			if (pdel->val == a)
//			{
//				break;
//			}
//			pdel = pdel->next;
//		}
//		if (pdel == nullptr)
//		{
//			cout << "No such element\n";
//			return -1;
//		}
//
//
//
//		if (ptail == phead)
//		{
//			val = phead->val;
//			delete phead;
//			phead = nullptr;
//			ptail = nullptr;
//			return val;
//		}
//		if (pdel == phead)
//			return PopFromHead();
//		if (pdel == ptail)
//			return PopFromTail();
//	
//		val = pdel->val;
//		Node* pcur = pdel->prev;
//		Node* pnext = pdel->next;
//
//		pcur->next = pnext;
//		pnext->prev = pcur;
//
//		delete pdel;
//		size--;
//		return val;
//	}
//
//
//	int DelFromPos(int pos)
//	{
//		if (phead == nullptr)
//		{
//			cout << "stack is empty\n";
//			return -1;
//		}
//		if (ptail == phead)
//		{
//			int val = phead->val;
//			delete phead;
//			phead = nullptr;
//			ptail = nullptr;
//			return val;
//		}
//		if (pos <= 0)
//			return PopFromHead();
//		if (pos >= size)
//			return PopFromTail();
//		Node* pdel = phead;
//		int val = pdel->val;
//
//		while (pos != 0)
//		{
//			pos--;
//			pdel = pdel->next;
//		}
//		Node* pcur = pdel->prev;
//		Node* pnext = pdel->next;
//
//		pcur->next = pnext;
//		pnext->prev = pcur;
//
//		delete pdel;
//		size--;
//		return val;
//	}
//	int PopFromTail()
//	{
//		if (phead == nullptr)
//		{
//			cout << "stack is empty\n";
//			return -1;
//		}
//		if (ptail == phead)
//		{
//			int val = phead->val;
//			delete phead;
//			phead = nullptr;
//			ptail = nullptr;
//			return val;
//		}
//
//		int val = ptail->val;
//		Node* pdel = ptail;		
//		ptail = ptail->prev;
//		ptail->next = nullptr;
//		size--;
//		delete pdel;
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
//		if (ptail == phead)
//		{
//			int val = phead->val;
//			delete phead;
//			phead = nullptr;
//			ptail = nullptr;
//			return val;
//		}
//		int val = phead->val;
//		Node* pdel = phead;
//		phead = phead->next;
//		phead->prev = nullptr;
//		delete pdel;
//		size--;
//		return val;
//	}
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
//	void ShowRev()
//	{
//		Node* cur = ptail;
//		while (cur != nullptr)
//		{
//			cout << cur->val << endl;
//			cur = cur->prev;
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
//	q.AddInHead(13);
//	q.AddInTail(8);
//	q.AddInTail(18);
//	q.AddInTail(22);
//	q.AddInTail(55);
//	cout << "-------------------\n";
//	q.Show();
//	cout << "-------------------\n";
//
//	/*int a = q.PopFromHead();
//	cout << "head: " << a << endl;
//
//	a = q.PopFromTail();
//	cout << "tail: " << a << endl;
//	cout << "-------------------\n";
//	q.Show();*/
//	cout << "-------------------\n";
//
//
//	q.AddInPos(100, 2);
//	q.AddInPos(1111, 4);
//	//
//	q.Show();
//	cout << "-------------------\n";
//
//	q.DelByVal(1);
//	q.DelByVal(100);
//	q.DelByVal(1111);
//	q.DelByVal(55);
//	q.Show();
//	cout << "-------------------\n";
//}