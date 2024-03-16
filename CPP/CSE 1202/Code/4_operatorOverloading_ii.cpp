#include <iostream>
#include <conio.h>
using namespace std;

class game
{
private:
    int speed = 0;

public:
    void speedUp()
    {
        speed++;
    }

    // pre, can be operator+ or operator++ because this means both binary & unary increment with more than 1 object
    void operator+()
    {
        speed++;
    }

    void operator++(int) // post, must be operator++ because this means pure unary increment with 1 object
    {
        speed++;
    }

    void speedDown()
    {
        speed--;
    }

    void operator--(int) // post, must be operator-- because this means pure unary decrement with 1 object
    {
        speed--;
    }

    void getSpeed()
    {
        cout << "speed = " << speed << "\n";
    }
};

int main()
{
    game g;
    char c;

    while (true)
    {
        c = getch();
        if (c == 'w')
        {
            // g.speedUp();
            //+g; // prefix because no parameter in operator++
            g++;
        }
        else if (c == 's')
        {
            // g.speedDown();
            g--; // postfix because 1 parameter in operator--
        }

        if (c == 'w' || c == 's')
        {
            g.getSpeed();
        }
    }

    return 0;
}