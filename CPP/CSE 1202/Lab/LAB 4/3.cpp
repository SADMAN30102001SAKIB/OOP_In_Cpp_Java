#include <iostream>
using namespace std;

class A
{
public:
    void Print()
    {
        cout << "Inside Print() of class A" << endl;
    }
};

class B : public A
{
public:
    void Print()
    {
        cout << "Inside Print() of class B" << endl;
    }
};

int main()
{

    A a;
    a.Print();

    B b;
    b.Print();

    A a2;
    A *p;
    p = &a2;
    p->Print();

    B b2;
    // A *p;
    p = &b2;
    p->Print();

    return 0;
}
