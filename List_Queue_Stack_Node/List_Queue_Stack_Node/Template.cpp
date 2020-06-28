#include<iostream>
#include<string>

using namespace std;

template<typename T>
class List
{
	struct Node
	{
		T val;
		Node* next;
		Node* prev;
	};
	Node* phead;
	Node* ptail;
	int size;
public:
	List()
	{
		phead = nullptr;
		ptail = nullptr;
		size = 0;
	}

	void AddInTail(T a)
	{
		Node* pnew = new Node();
		pnew->val = a;
		pnew->next = nullptr;
		pnew->prev = nullptr;

		if (phead == nullptr)
		{
			ptail = pnew;
			phead = pnew;
			size++;
			return;
		}

		ptail->next = pnew;
		pnew->prev = ptail;
		ptail = pnew;

		size++;
	}

	void AddInHead(T a)
	{
		Node* pnew = new Node();
		pnew->val = a;
		pnew->next = nullptr;
		pnew->prev = nullptr;

		if (phead == nullptr)
		{
			ptail = pnew;
			phead = pnew;
			size++;
			return;
		}

		pnew->next = phead;
		phead->prev = pnew;
		phead = pnew;
		size++;
	}

	void AddInPos(T a, int pos)
	{
		pos--;
		Node* pnew = new Node();
		pnew->val = a;

		if (phead == nullptr)
		{
			pnew->next = nullptr;
			ptail = pnew;
			phead = pnew;
			size++;
			return;
		}

		if (pos <= 0)
		{
			AddInHead(a);
			return;
		}
		if (pos >= size)
		{
			AddInTail(a);
			return;
		}


		Node* pcur = phead;

		while (pos != 0)
		{
			pos--;
			pcur = pcur->next;
		}

		pnew->prev = pcur;
		pnew->next = pcur->next;

		pcur->next->prev = pnew;
		pcur->next = pnew;
		size++;
	}

	T DelByVal(T a)
	{
		if (phead == nullptr)
		{
			cout << "stack is empty\n";
			return -1;
		}
		Node* pdel = phead;
		T val = -1;

		while (pdel != nullptr)
		{
			if (pdel->val == a)
			{
				break;
			}
			pdel = pdel->next;
		}
		if (pdel == nullptr)
		{
			cout << "No such element\n";
			return -1;
		}



		if (ptail == phead)
		{
			val = phead->val;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return val;
		}
		if (pdel == phead)
			return PopFromHead();
		if (pdel == ptail)
			return PopFromTail();

		val = pdel->val;
		Node* pcur = pdel->prev;
		Node* pnext = pdel->next;

		pcur->next = pnext;
		pnext->prev = pcur;

		delete pdel;
		size--;
		return val;
	}


	T DelFromPos(T pos)
	{
		if (phead == nullptr)
		{
			cout << "stack is empty\n";
			return -1;
		}
		if (ptail == phead)
		{
			T val = phead->val;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return val;
		}
		if (pos <= 0)
			return PopFromHead();
		if (pos >= size)
			return PopFromTail();
		Node* pdel = phead;
		T val = pdel->val;

		while (pos != 0)
		{
			pos--;
			pdel = pdel->next;
		}
		Node* pcur = pdel->prev;
		Node* pnext = pdel->next;

		pcur->next = pnext;
		pnext->prev = pcur;

		delete pdel;
		size--;
		return val;
	}
	T PopFromTail()
	{
		if (phead == nullptr)
		{
			cout << "stack is empty\n";
			return -1;
		}
		if (ptail == phead)
		{
			T val = phead->val;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return val;
		}

		T val = ptail->val;
		Node* pdel = ptail;
		ptail = ptail->prev;
		ptail->next = nullptr;
		size--;
		delete pdel;
		return val;
	}

	T PopFromHead()
	{
		if (phead == nullptr)
		{
			cout << "stack is empty\n";
			return -1;
		}
		if (ptail == phead)
		{
			T val = phead->val;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return val;
		}
		T val = phead->val;
		Node* pdel = phead;
		phead = phead->next;
		phead->prev = nullptr;
		delete pdel;
		size--;
		return val;
	}

	void Show()
	{
		Node* cur = phead;
		while (cur != nullptr)
		{
			cout << cur->val << endl;
			cur = cur->next;
		}
	}

	void ShowRev()
	{
		Node* cur = ptail;
		while (cur != nullptr)
		{
			cout << cur->val << endl;
			cur = cur->prev;
		}
	}

	void Clear()
	{
		if (phead != nullptr)
		{
			Node* del = phead;
			while (del != nullptr)
			{
				phead = phead->next;
				delete del->val;//  will error if T not a pointer on dynamic object
				delete del;
				del = phead;
			}
		}
	}

	~List()
	{
		Clear();
	}
};

class User
{
	string name;
public:
	User(string n)
	{
		name = n;
	}
	friend ostream& operator<< (ostream & out, User*u);
};

ostream& operator << (ostream & out, User* u)
{
	out << u->name << endl;
	return out;
}

void main()
{
	List<User*> q;
	q.AddInHead(new User("Ivanov"));
	cout << "-------------------\n";
	q.Show();
	cout << "-------------------\n";



	q.AddInPos(new User("Petrov"), 2);

	q.Show();
	cout << "-------------------\n";

}