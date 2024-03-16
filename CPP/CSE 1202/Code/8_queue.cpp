#include <bits/stdc++.h>
using namespace std;

queue<int> ax;

int menu()
{
    cout << "--Queue Menu--"
         << "\n";
    cout << "1. Enqueue"
         << "\n";
    cout << "2. Dequeue"
         << "\n";
    cout << "3. Display"
         << "\n";
    cout << "4. Exit"
         << "\n";
    int op;
    cout << "Enter option: ";
    cin >> op;
    return op;
}

void enqueue()
{
    int x;
    if (ax.size() <= 3)
    {
        cout << "Enter item: ";
        cin >> x;
        ax.push(x);
        cout << "Enqueue Successfull"
             << "\n";
    }
    else
    {
        cout << "Stack full"
             << "\n";
    }
}

void dequeue()
{
    if (!ax.empty())
    {
        int x = ax.front();
        ax.pop();
        cout << "Dequeue: " << x << "\n";
    }
    else
    {
        cout << "Queue empty"
             << "\n";
    }
}

void display(queue<int> bx)
{
    cout << "Queue: ";
    while (!bx.empty())
    {
        cout << bx.front() << "\n";
        bx.pop();
    }
    cout << "\n";
}

int main()
{
    int op;
    while (1)
    {
        op = menu();
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(ax);
            break;
        case 4:
            cout << "Exiting..."
                 << "\n";
            break;
        default:
            cout << "Invalid option"
                 << "\n";
        }
    }

    return 0;
}