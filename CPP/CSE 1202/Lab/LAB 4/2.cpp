#include <iostream>
using namespace std;
class Circuit
{
private:
    float real;
    float img;

public:
    Circuit(float r, float i)
    {
        real = r;
        img = i;
    }
    Circuit operator+(Circuit &other)
    {
        Circuit t(real + other.real, img + other.img);
        return t;
    }
    Circuit operator/(Circuit &other)
    {
        float REAL = ((real * other.real) + (img * other.img)) / (1.0 * ((other.real * other.real) + (other.img * other.img)));
        float IMG = ((img * other.real) - (real * other.img)) / (1.0 * ((other.real * other.real) + (other.img * other.img)));
        Circuit t(REAL, IMG);
        return t;
    }
    Circuit inverse()
    {
        float REAL = real / ((real * real) + (img * img));
        float IMG = -1.0 * (img / ((real * real) + (img * img)));
        Circuit t(REAL, IMG);
        return t;
    }
    void display()
    {
        cout << "(" << real << ")"
             << " + "
             << "(" << img << ")"
             << "j"
             << "\n";
    }
};
int main()
{
    Circuit z1(3, 4);
    Circuit z2(4, -3);
    Circuit z3(0, 6);
    Circuit z1i = z1.inverse();
    Circuit z2i = z2.inverse();
    Circuit z3i = z3.inverse();
    Circuit totalImpedance = (z1i + z2i + z3i).inverse();
    Circuit inputVoltage(100, 50);
    cout << "Total Impedance: ";
    totalImpedance.display();
    cout << "Input Voltage: ";
    inputVoltage.display();
    Circuit current = inputVoltage / totalImpedance;
    cout << "Current: ";
    current.display();
    return 0;
}