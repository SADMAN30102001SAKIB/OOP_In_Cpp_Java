#include <iostream>
using namespace std;

class Father
{
private:
    int money = 1000;

protected:
    int gold = 40;

public:
    int land = 50;
};

class Son : public Father
{
public:
    void accessFatherMembers()
    {
        // cout << "Son's Money: " << money << endl;
        cout << "Son's Gold: " << gold << endl;
        cout << "Son's Land: " << land << endl;
    }
};

class GrandSon : private Son
{
public:
    void accessFatherMembers()
    {
        // cout << "GrandSon's Money: " << money << endl;
        cout << "GrandSon's Gold: " << gold << endl;
        cout << "GrandSon's Land: " << land << endl;
    }
};

int main()
{
    Son son;
    GrandSon grandSon;

    son.accessFatherMembers();

    grandSon.accessFatherMembers();

    return 0;
}
