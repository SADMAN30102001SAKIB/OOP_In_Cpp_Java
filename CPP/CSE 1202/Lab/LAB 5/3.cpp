#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> ax;

    ax = {10, 60, 30, 70, 20};

    cout << "Third element: " << ax.at(2) << endl;

    cout << "First element: " << ax.front() << endl;

    cout << "Last element: " << ax.back() << endl;

    ax.fill(5);

    if (ax.empty())
    {
        cout << "Array is empty." << endl;
    }
    else
    {
        cout << "Array is not empty." << endl;
    }

    cout << "Size of array: " << ax.size() << endl;

    cout << "Maximum size of array: " << ax.max_size() << endl;

    cout << "Address of the first element: " << ax.begin() << endl;

    cout << "Address of the last element: " << ax.end() << endl;

    return 0;
}
