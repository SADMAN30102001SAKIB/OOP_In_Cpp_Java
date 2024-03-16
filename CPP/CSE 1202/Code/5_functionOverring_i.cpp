#include <iostream>
using namespace std;

class Shape
{
public:
    int a = 20;

    // Doing this in the base class does static binding & enables compile-time polymorphism & function overriding
    void show()
    {
        cout << "Showing a shape." << endl;
    }

    // Using virtual functions in the base class does dynamic binding & enables runtime polymorphism and function overriding.
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : virtual public Shape // to overcome the diamond shape inheritance ambiguity
{
public:
    int b = 10;

    // The override keyword is optional but recommended to clearly indicate your intention to override a base class function.
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }

    void show()
    {
        cout << "Showing a Circle." << endl;
    }

    void specificToCircle()
    {
        cout << "Circle-specific method." << endl;
    }
};

class Square : virtual public Shape // to overcome the diamond shape inheritance ambiguity
{
public:
    int a = 15; // Variable shadowing

    // The override keyword is optional but recommended to clearly indicate your intention to override a base class function.
    void draw() override
    {
        cout << "Drawing a square." << endl;
    }
};

class randomShape : public Circle, public Square
{
public:
    void draw() override {} // gotta override to resolve amiguity because the compiler cannot determine which overridden draw function to use.

    void func()
    {
        // cout << a << "\n"; // will print 15 because the immediate base class Square's a = 15. So won't even go to Shape class.
        cout << Shape::a << "\n"; // ambiguous if Circle & Square didn't inherit Shape class virtually.
        // cout << Circle::a << "\n"; // Ok for all cases
    }
};

int main()
{
    Shape *shapePtr; // While it's possible to directly call derived class methods without using base class pointers, using pointers enables more flexible and polymorphic behavior.

    Circle circle; // the circle is created directly on the stack.
    shapePtr = &circle;

    Shape *square = new Square(); // the Square's object is dynamically allocated on the heap

    shapePtr->draw(); // Calls the overridden draw() in Circle
    shapePtr->show(); // Calls the overridden draw() in Shape
    cout << shapePtr->a << "\n";
    square->draw();            // Calls the overridden draw() in Square
    cout << square->a << "\n"; // gives 20 because square can't access "a" of Square class

    Square s;
    cout << s.a << "\n"; // gives 15 because here "a" means Square's "a"

    delete square;

    randomShape r;
    r.func();

    /* Uncommenting the following lines will lead to a compilation error, as the base class pointer doesn't have access to Circle-specific members*/
    // shapePtr->specificToCircle(); // for it to work, we must make a virtual or pure virtual specificToCircle() in Shape class
    // shapePtr->b = 15;

    return 0;
}
