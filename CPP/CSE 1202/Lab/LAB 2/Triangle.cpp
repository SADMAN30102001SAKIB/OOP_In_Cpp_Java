#include <bits/stdc++.h>
using namespace std;

class triangle
{
private:
    int a;
    int b;
    int c;
    static int n;

public:
    triangle()
    {
        a = 0;
        b = 0;
        c = 0;
        n++;
    }

    triangle(int A, int B, int C)
    {
        a = A;
        b = B;
        c = C;
        n++;
    }

    void setValue()
    {
        cout << "Enter 3 values: ";
        int a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        a = a1;
        b = b1;
        c = c1;
    }

    void getValue()
    {
        cout << "\nA: " << a << ", B: " << b << ", C: " << c << "\n";
    }

    int total()
    {
        return n;
    }

    int isTriangle()
    {
        if (a > b)
        {
            if (a > c)
            {
                return (a < (b + c)) ? 1 : 0;
            }
            else
            {
                return (c < (b + a)) ? 1 : 0;
            }
        }
        else
        {
            if (b > c)
            {
                return (b < (a + c)) ? 1 : 0;
            }
            else
            {
                return (c < (b + a)) ? 1 : 0;
            }
        }
    }

    float Area()
    {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    int perimeter()
    {
        return a + b + c;
    }

    static void bigger(triangle &t1, triangle &t2)
    {
        if (t1.Area() > t2.Area())
        {
            cout << "Area of t1 is bigger."
                 << "\n";
        }
        else
        {
            cout << "Area of t2 is bigger."
                 << "\n";
        }
    }
};

int triangle::n = 0;

int main()
{
    triangle T[2];

    for (int i = 0; i < 2; i++)
    {
        T[i].setValue();

        if (T[i].isTriangle())
        {
            T[i].getValue();
            cout << "It is a triangle"
                 << "\n";
            cout << "Perimeter: " << T[i].perimeter() << "\n";
            cout << "Area: " << T[i].Area() << "\n\n";
        }
        else
        {
            T[i].getValue();
            cout << "It is a not a triangle"
                 << "\n\n";
        }
    }

    triangle::bigger(T[0], T[1]);

    cout << "Total triangle: " << T[0].total() << "\n";

    return 0;
}