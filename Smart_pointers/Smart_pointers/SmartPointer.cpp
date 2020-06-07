#include<iostream>
#include<memory>

using namespace std;

//unique_ptr
//weak_ptr
//shared_ptr

class User
{
public:
	void DoSmth()
	{
		cout << "Hello\n";
	}
	void SayHello()
	{
		cout << "Hello\n";
	}
	void Show()
	{
		cout << "Hello\n";
	}
};

template<typename T>
class SmartPtr
{
private:
	T* ptr;
	SmartPtr& operator= (SmartPtr &ptr)
	{}
	SmartPtr(SmartPtr & ptr)
	{
	}
public:
	SmartPtr(T * ptr)
	{
		this->ptr = ptr;
	}

	T& operator *()
	{
		return *ptr;
	}

	T* operator ->()
	{
		return ptr;
	}

	~SmartPtr()
	{
		delete ptr;
	}
};


void main()
{
	SmartPtr<User> user(new User());
	user->DoSmth();


	//forbedden to create copy
	//SmartPtr<User> user2 = user;


	unique_ptr<User> usr1(new User());
	User* u = usr1.get();
	//unique_ptr<User> usr2 = usr1;

	shared_ptr<User> sh(new User());
	shared_ptr<User> sh1 = sh;
	cout << sh1.use_count() << endl;
}