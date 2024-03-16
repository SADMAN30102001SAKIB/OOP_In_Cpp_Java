#include <iostream>
using namespace std;

class Complex
{
    int x;
    int y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    }

    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    // must be operator+ because it is adding 2 objects, so operator++ doesn't make sense & there's no operator like operator+++ or more because overloding needs to be done on valid operators only
    Complex operator+(Complex c)
    {
        Complex t;
        t.x = x + c.x;
        t.y = y + c.y;
        return t;
    }
};

int main(void)
{
    Complex a1(2, 3), a2(4, 6), a3;
    // a3 = a1.operator+(a2);
    a3 = a1 + a2; // binary operator
    cout << a3.getX() << " + j" << a3.getY() << "\n";
}