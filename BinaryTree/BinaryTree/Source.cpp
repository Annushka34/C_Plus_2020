#include<iostream>
#include<string>
using namespace std;

class Bus
{
private:
	int BusNumb;
	int RoadNumb;
	string Driver;
public:
	Bus() {};
	Bus(int BusNumb, int RoadNumb, string Driver)
	{
		this->BusNumb = BusNumb;
		this->RoadNumb = RoadNumb;
		this->Driver = Driver;
	};
	void GetData()
	{
		cout << "BusNumb " << this->BusNumb << endl;
		cout << "RoadNumb " << this->RoadNumb << endl;
		cout << "Driver " << this->Driver << endl;
	}
	int GetBusNumb()
	{
		return this->BusNumb;
	}
};

class BusList
{
public:
	struct Node
	{
		Bus* bus;
		Node* next;
		Node* prev;
	};
	Node* phead;
	Node* ptail;

	int size;
public:
	BusList()
	{
		phead = nullptr;
		ptail = nullptr;
		size = 0;
	}

	void Show()
	{
		Node* show = phead;
		while (show != nullptr)
		{
			show->bus->GetData();
			show = show->next;
		}
	}

	void PushInHead(Bus*& a)
	{
		Node* pnew = new Node();
		pnew->bus = a;

		if (phead == nullptr)
		{
			pnew->next = nullptr;
			ptail = pnew;
			phead = pnew;
		}
		else
		{
			pnew->next = phead;
			phead = pnew;
		}
		size++;
	}

	void PushInTail(Bus*& a)
	{

		Node* pnew = new Node();
		pnew->bus = a;

		if (phead == nullptr)
		{
			pnew->next = nullptr;
			ptail = pnew;
			phead = pnew;
		}
		else
		{
			ptail->next = pnew;
			ptail = pnew;
		}
		size++;
	}

	void PushInPos(Bus* a, int BusNumb)
	{
		BusNumb--;
		Node* pnew = new Node();
		pnew->bus = a;
		if (phead == nullptr)
		{
			pnew->next = nullptr;
			ptail = pnew;
			phead = pnew;
			size++;
			return;
		}

		if (BusNumb <= 0)
		{
			PushInHead(a);
			return;
		}
		if (BusNumb > size)
		{

			PushInTail(a);
			return;
		}

		Node* pcur = phead;

		while (BusNumb != 0)
		{
			BusNumb--;
			pcur = pcur->next;
		}

		pnew->next = pcur->next;
		pcur->next = pnew;
		size++;
	}

	Bus* PopFromHead()
	{
		if (phead == nullptr)
		{
			cout << "Stack is empty\n"; return nullptr;
		}
		Bus* bus = phead->bus;
		Node* pdel = phead;
		phead = phead->next;
		delete pdel;
		size--;
		return bus;
	}

	Bus* PopFromTail()
	{
		if (phead == nullptr)
		{
			cout << "Stack is empty\n"; return nullptr;
		}
		if (ptail == phead)
		{
			Bus* bus = phead->bus;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return bus;
		}
		Bus* bus = ptail->bus;
		Node* pdel = ptail;
		Node* pCur = phead;
		while (pCur->next != ptail)
		{
			pCur = pCur->next;
		}
		delete pdel;
		ptail = pCur;
		ptail->next = nullptr;
		size--;
		return bus;
	}
	Bus* PopFromPos(int BusNumb)
	{
		if (phead == nullptr)
		{
			cout << "Stack is empty\n"; return nullptr;
		}
		if (ptail == phead)
		{
			Bus* bus = phead->bus;
			delete phead;
			phead = nullptr;
			ptail = nullptr;
			return bus;
		}
		if (BusNumb <= 0)
			return PopFromHead();
		if (BusNumb >= size)
			return PopFromTail();

		Node* pdel = phead;
		Bus* bus = pdel->bus;
		while (BusNumb != 0)
		{
			BusNumb--;
			pdel = pdel->next;
		}
		Node* pCur = pdel->prev;
		Node* pnext = pdel->next;
		pCur->next = pnext;
		pnext->prev = pCur;
		delete pdel;
		size--;
		return bus;
	}

	void Clear()
	{
		if (phead != nullptr)
		{
			Node* del = phead;
			while (del != nullptr)
			{
				phead = phead->next;
				delete del;
				del = phead;
			}
		}
	}

	~BusList()
	{
		Clear();
	}
};

class AutoPark :public BusList
{
private:
	BusList* Park;
	BusList* Road;
public:

	AutoPark()
	{
		Park = new BusList();
		Road = new BusList();
	};
	void ByeBus()
	{
		int BusNumb;
		int RoadNumb;
		string Driver;
		cout << "Enter BusNumb ";
		cin >> BusNumb;
		cout << "Enter road numer ";
		cin >> RoadNumb;
		cout << "Enter surname Driver ";
		cin >> Driver;
		Bus* b = new Bus(BusNumb, RoadNumb, Driver);
		Park->PushInTail(b);//Ломается
	}

	void ShowPark()
	{
		Park->Show();
	}

	void ShowRoad()
	{
		Road->Show();
	}

	void SaleBus()
	{
		ShowPark();
		int BusNumb;
		cout << "Enter BusNumb for sale ";
		cin >> BusNumb;
		Park->PopFromPos(BusNumb);
		system("Cls");
		ShowPark();
	}

	void GoToRoad()
	{
		int BusNumb;
		Park->Show();
		Road->Show();
		cout << "Enter BusNumb for road ";
		cin >> BusNumb;
		Bus* temp = Park->PopFromPos(BusNumb);
		Park->PopFromPos(BusNumb);
		Road->PushInTail(temp);//
	}

	void CameBackToPark()
	{
		int BusNumb;
		Park->Show();
		Road->Show();
		cout << "Enter BusNumb for CameBakToPark ";
		cin >> BusNumb;
		Bus* temp = Road->PopFromPos(BusNumb);
		Road->PopFromPos(BusNumb);
		Park->PushInTail(temp);//
	}

	~AutoPark()
	{
		delete Park;
		delete Road;
	}
};

void main()
{
	AutoPark* ap = new AutoPark();

	ap->ByeBus();
	ap->ByeBus();
	ap->ByeBus();
	ap->ByeBus();
	ap->ByeBus();
	ap->ShowPark();
	cout << "SaleBus" << endl;
	ap->SaleBus();
	ap->ShowPark();
	cout << "GoToRoad" << endl;
	ap->GoToRoad();
	ap->GoToRoad();
	ap->ShowPark();
	ap->ShowRoad();
	cout << "CameBakToPark" << endl;
	ap->CameBackToPark();
	ap->ShowPark();
	ap->ShowRoad();


}