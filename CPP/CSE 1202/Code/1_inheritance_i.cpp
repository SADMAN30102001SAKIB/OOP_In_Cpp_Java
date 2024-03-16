#include <iostream>
using namespace std;

class A
{
private:
    int x = 10;

protected:
    int y = 20;

public:
    int z = 30;
    A()
    {
        cout << "A"
             << "\n";
    }
    A(int a)
    {
        cout << "parameterized A " << a << "\n";
    }
    void display()
    {
        cout << "A's display"
             << "\n";
        cout << x << "\n";
        cout << y << "\n";
        cout << z << "\n";
    }
};

class B : private A // Makes A's all public & protected members private
{
public:
    B()
    {
        cout << "B"
             << "\n";
    }
    void display()
    {
        cout << "B's display"
             << "\n";
        // cout << x << "\n";
        cout << y << "\n";
        cout << z << "\n";
    }
};

class C : protected B // Should make B's all public & protected members protected
{
public:
    C()
    {
        cout << "C"
             << "\n";
    }
    void display()
    {
        cout << "C's display"
             << "\n";
        // cout << x << "\n";
        // cout << y << "\n";
        // cout << z << "\n";
        B::display();
    }
};

class X : public A
{
public:
    X()
    {
        cout << "X"
             << "\n";
    }
    X(int a) : A(a)
    {
        cout << "parameterized X " << a << "\n";
    }
    void display()
    {
        cout << "X's display"
             << "\n";
        // cout << x << "\n";
        cout << y << "\n";
        cout << z << "\n";
    }
};

int main()
{
    B b;
    C c;
    c.display();
    b.display();

    X x(10);
    x.A::display(); // use A's display insted of own display
    cout << x.z << endl;

    return 0;
}

// relation               public/outside access     protected/O.A.      privet/O.A.
// public inheritence        yes/yes                   yes/no              no/no
// protected inheritence     yes/no                    yes/no              no/no
// privet inheritence        yes/no                    yes/no              no/no