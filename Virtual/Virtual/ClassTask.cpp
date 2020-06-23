#include <iostream>

using namespace std;

class Emplaee
{
public: virtual void Show() = 0;
};


class President :public Emplaee
{
public:
    void Show() override
    { cout << "_____________\n"; }
};
class Boss:public Emplaee
{
public:
    void Show() { cout << "***********\n"; }
};

int main()
{
    Emplaee* e[4];
    e[0] = new Boss();
    e[1] = new President();
    e[2] = new President();
    e[3] = new Boss();
    for (int i = 0; i < 4; i++)
    {
        e[i]->Show();
    }
    return 0;
}