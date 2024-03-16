#include <iostream>
using namespace std;

class A
{
private:
    int arr[10];
};

// for this sizeof(D) = 40(from B/C) + 4(for pointer in B to A) + 4(for pointer in C to A) = 48
// class B : virtual public A
// {
// };

// class C : virtual public A
// {
// };

// for this sizeof(D) = 40(from B) + 4(for pointer in B to A) + 40(from C) = 84
// class B : virtual public A
// {
// };

// class C : public A
// {
// };

// for this sizeof(D) = 40(from B) + 40(from C) + 4(for pointer in C to A) = 84
// class B : public A
// {
// };

// class C : virtual public A
// {
// };

// for this sizeof(D) = 40(from B) + 40(from C) = 80
class B : virtual public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    cout << sizeof(D) << "\n";
    return 0;
}
