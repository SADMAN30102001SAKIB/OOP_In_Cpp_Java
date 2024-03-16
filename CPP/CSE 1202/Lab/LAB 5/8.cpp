#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);

    qu.pop();

    if (!qu.empty())
    {
        cout << "Front element: " << qu.front() << endl;
    }
    else
    {
        cout << "Queue is empty." << endl;
    }

    if (!qu.empty())
    {
        cout << "Rear element: " << qu.back() << endl;
    }
    else
    {
        cout << "Queue is empty." << endl;
    }

    cout << "Is queue empty? " << (qu.empty() ? "Yes" : "No") << endl;

    return 0;
}
