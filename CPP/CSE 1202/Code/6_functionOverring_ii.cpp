#include <iostream>
using namespace std;

class A
{
public:
    /*
    1. The virtual functions should not be static.
    2. A virtual function can be declared as friend for another class.
    3. Constructors cannot be declared as virtual, but destructors can
    be declared as virtual.
    4. They can be accessed by using pointer object.
    5. The prototype of the base class version of virtual function and
    derived class function prototype must be identical.
    6. Base pointer can point to any type of derived object but derived
    pointer can not point to base class object.
    7. If virtual function is defined in base class, it is need not be
    redefine in derived class.
    */
    virtual void show()
    {
        cout << "Inside show() A"
             << "\n";
    }
};

class B : public A
{
public:
    void show() override
    {
        cout << "Inside show() B"
             << "\n";
    }
};

class Animal // this is an abstract class (because it has 1 or more pure virtual function), we can't make an object of this class (only pointer)
{
private:
    int x;

public:
    // must make this base eat() doesn't matter if it is virtual or pure virtual. Otherwise it won't be able to access eat() of derived classes through it's pointer
    // virtual void eat()
    // {
    //     cout << "Animal food"
    //          << "\n";
    // }

    virtual void eat() = 0; // pure virtual function (means the implementation/overriding must be given in the derived classes or at least one class. If we don't define it in the derived class, then that derived class also becomes abstract class & again that new abstract class can't have an object), it does nothing but need to make it otherwise will through error

    void setValue(int X)
    {
        x = X;
    }

    void getValue()
    {
        cout << "x = " << x << "\n";
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Dog food"
             << "\n";
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout << "Cat food"
             << "\n";
    }
};

int main()
{
    A a, *pa;
    B b, *pb;

    // pb = &a; // This line would result in an error because pb is a pointer to class B, and you're trying to assign a pointer to class A to it.

    pa = &b; // This is valid because pa is a pointer to class A, and you're assigning a pointer to class B (which is a subclass of A) to it.

    pa->show(); // This will call the show() method of class B due to run time (dynamic) binding. but if show() in A is not virtual, then it will call show() method of class A due to static (compile-time) binding

    // Animal abc; // error
    Animal *Pan;
    Dog d;
    d.setValue(10);
    d.getValue();
    Pan = &d;

    Pan->eat();

    Cat c;
    Pan = &c;
    Pan->eat();

    return 0;
}
