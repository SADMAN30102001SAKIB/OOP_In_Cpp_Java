#include <bits/stdc++.h>
using namespace std;

stack<int> ax;

int menu()
{
    cout << "--Stack Menu--"
         << "\n";
    cout << "1. Push"
         << "\n";
    cout << "2. Pop"
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

void push()
{
    int x;
    if (ax.size() <= 3)
    {
        cout << "Enter item: ";
        cin >> x;
        ax.push(x);
        cout << "Push Successfull"
             << "\n";
    }
    else
    {
        cout << "Stack full"
             << "\n";
    }
}

void pop()
{
    if (!ax.empty())
    {
        int x = ax.top();
        ax.pop();
        cout << "Poped: " << x << "\n";
    }
    else
    {
        cout << "Stack empty"
             << "\n";
    }
}

void display(stack<int> bx)
{
    cout << "Stack: ";
    while (!bx.empty())
    {
        cout << bx.top() << "\n";
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
            push();
            break;
        case 2:
            pop();
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