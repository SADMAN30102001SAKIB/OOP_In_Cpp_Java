#include <iostream>
using namespace std;

class A
{
private:
    int ax;

public:
    A(int a)
    {
        ax = a;
        cout << "Constructor of class A called." << endl;
    }

    int getAx()
    {
        return ax;
    }

    ~A()
    {
        cout << "Destructor of class A called." << endl;
    }
};

class B : public A
{
private:
    int bx;

public:
    B() : A(1)
    {
        bx = 2;
        cout << "Constructor of class B called." << endl;
    }

    int getBx()
    {
        return bx;
    }

    ~B()
    {
        cout << "Destructor of class B called." << endl;
    }
};

class C : public A
{
private:
    int cx;

public:
    C() : A(1)
    {
        cx = 3;
        cout << "Constructor of class C called." << endl;
    }

    void sumMembers(int bx)
    {
        int sum = getAx() + bx + cx;
        cout << "Sum of ax and cx: " << sum << endl;
    }

    ~C()
    {
        cout << "Destructor of class C called." << endl;
    }
};

int main()
{
    B b;
    C c;

    c.sumMembers(b.getBx());

    return 0;
}
