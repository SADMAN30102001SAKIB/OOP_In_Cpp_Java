#include <iostream>
using namespace std;

template <class T1, class T2>
class A
{
private:
    T1 x;
    T2 y;

public:
    void setData(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }

    auto Sum()
    {
        return x + y;
    }
};

int main()
{
    A<int, int> intIntObj;
    intIntObj.setData(10, 20);
    cout << "Sum of int + int: " << intIntObj.Sum() << endl;

    A<int, double> intDoubleObj;
    intDoubleObj.setData(15, 12.5);
    cout << "Sum of int + double: " << intDoubleObj.Sum() << endl;

    A<double, int> doubleIntObj;
    doubleIntObj.setData(7.5, 25);
    cout << "Sum of double + int: " << doubleIntObj.Sum() << endl;

    A<double, double> doubleDoubleObj;
    doubleDoubleObj.setData(3.14, 2.71);
    cout << "Sum of double + double: " << doubleDoubleObj.Sum() << endl;

    return 0;
}
