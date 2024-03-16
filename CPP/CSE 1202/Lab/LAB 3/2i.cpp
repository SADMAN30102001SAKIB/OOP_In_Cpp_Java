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

class B : public A
{
public:
    void accessMembers()
    {
        // cout << "Value of x (privet member): " << x << endl;
        cout << "Value of y (protected member): " << y << endl;
        cout << "Value of z (public member): " << z << endl;
    }
};

int main()
{
    B b;

    b.accessMembers();

    return 0;
}
