#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    tuple<int, string, double> tx;

    tx = make_tuple(100, "Kamal", 3.5);

    cout << "Int data member in tx: " << get<0>(tx) << endl;

    cout << "String data member in tx: " << get<1>(tx) << endl;

    cout << "Double data member in tx: " << get<2>(tx) << endl;

    get<2>(tx) = 3.7;

    tuple<int, string, double> bx = make_tuple(200, "Rahim", 4.2);

    cout << "Int data member in bx: " << get<0>(bx) << endl;

    cout << "String data member in bx: " << get<1>(bx) << endl;

    cout << "Double data member in bx: " << get<2>(bx) << endl;

    cout << "Before swaping:"
         << "\n";
    cout << "tx: (" << get<0>(tx) << ", " << get<1>(tx) << ", " << get<2>(tx) << ")" << endl;

    swap(tx, bx);

    cout << "After swaping:"
         << "\n";
    cout << "tx: (" << get<0>(tx) << ", " << get<1>(tx) << ", " << get<2>(tx) << ")" << endl;

    return 0;
}
