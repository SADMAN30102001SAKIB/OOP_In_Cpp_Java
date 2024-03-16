#include <iostream>
using namespace std;

class A
{
private:
    int x = 1;

protected:
    int y = 2;

public:
    int z = 3;
};

class B
{
private:
    int p = 4;

protected:
    int q = 5;

public:
    int r = 6;
};

class C : public A, public B
{
public:
    void accessMembers()
    {
        // cout << "Value of x (privet member of class A): " << x << endl;
        cout << "Value of y (protected member of class A): " << y << endl;
        cout << "Value of z (public member of class A): " << z << endl;

        // cout << "Value of p (privet member of class B): " << p << endl;
        cout << "Value of q (protected member of class B): " << q << endl;
        cout << "Value of r (public member of class B): " << r << endl;
    }
};

int main()
{
    C c;

    c.accessMembers();

    return 0;
}
