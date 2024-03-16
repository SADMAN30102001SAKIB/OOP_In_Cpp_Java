#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> px;
    px = make_pair(10, "Rajshahi");
    cout << "Int data member in px: " << px.first << endl;
    cout << "String data member in px: " << px.second << endl;

    get<0>(px) = 20;

    pair<int, string> bx;
    bx = make_pair(30, "Thakurgaon");
    cout << "Int data member in bx: " << px.first << endl;
    cout << "String data member in bx: " << px.second << endl;

    cout << "Before swaping:";
    cout << "px: (" << px.first << ", " << px.second << ")" << endl;

    swap(px, bx);

    cout << "After swaping:";
    cout << "px: (" << px.first << ", " << px.second << ")" << endl;

    return 0;
}
