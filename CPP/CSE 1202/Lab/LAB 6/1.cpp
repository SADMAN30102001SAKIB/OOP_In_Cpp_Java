#include <iostream>
#include <stack>
#include <cstdlib>
#include <cstdio>
using namespace std;

class Stack
{
    stack<int> st;

public:
    void push(int data)
    {
        st.push(data);
        cout << "Pushed " << data << " onto the stack." << endl;
    }

    void pop()
    {
        if (!st.empty())
        {
            int top = st.top();
            st.pop();
            cout << "Popped " << top << " from the stack." << endl;
        }
        else
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    bool empty()
    {
        return st.empty();
    }

    void display()
    {
        if (!st.empty())
        {
            cout << "Stack elements: ";
            stack<int> temp = st;
            while (!temp.empty())
            {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
        else
        {
            cout << "Stack is empty." << endl;
        }
    }

    void displayTop()
    {
        if (!st.empty())
        {
            cout << "Top element of the stack: " << st.top() << endl;
        }
        else
        {
            cout << "Stack is empty. No top element." << endl;
        }
    }
};

void displayMenu()
{
    cout << "**** Stack Menu ****" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Display" << endl;
    cout << "4. Display Top" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your option: ";
}

int main()
{
    Stack s;
    int choice, data;

    do
    {
        system("cls");

        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to push onto the stack: ";
            cin >> data;
            s.push(data);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            s.displayTop();
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }

        cout << "Press enter key to continue...";
        getchar();
        getchar();

    } while (choice != 5);

    return 0;
}
