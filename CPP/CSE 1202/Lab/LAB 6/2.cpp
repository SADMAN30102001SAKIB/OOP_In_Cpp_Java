#include <iostream>
#include <queue>
#include <cstdlib>
#include <cstdio>
using namespace std;

class Queue
{
    queue<int> q;

public:
    void enqueue(int data)
    {
        q.push(data);
        cout << "Enqueued " << data << " into the queue." << endl;
    }

    void dequeue()
    {
        if (!q.empty())
        {
            int front = q.front();
            q.pop();
            cout << "Dequeued " << front << " from the queue." << endl;
        }
        else
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
    }

    void frontElement()
    {
        if (!q.empty())
        {
            cout << "Front element of the queue: " << q.front() << endl;
        }
        else
        {
            cout << "Queue is empty. No front element." << endl;
        }
    }

    void rearElement()
    {
        if (!q.empty())
        {
            cout << "Rear element of the queue: " << q.back() << endl;
        }
        else
        {
            cout << "Queue is empty. No rear element." << endl;
        }
    }

    bool empty()
    {
        return q.empty();
    }

    void displayQueue()
    {
        if (!q.empty())
        {
            cout << "Queue elements: ";
            queue<int> temp = q;
            while (!temp.empty())
            {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
        else
        {
            cout << "Queue is empty." << endl;
        }
    }
};

void displayMenu()
{
    cout << "**** Queue Menu ****" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Front Element" << endl;
    cout << "4. Rear Element" << endl;
    cout << "5. Display Queue" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your option: ";
}

int main()
{
    Queue q;
    int choice, data;

    do
    {
        system("cls");

        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to enqueue into the queue: ";
            cin >> data;
            q.enqueue(data);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.frontElement();
            break;
        case 4:
            q.rearElement();
            break;
        case 5:
            q.displayQueue();
            break;
        case 6:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }

        cout << "Press enter key to continue...";
        getchar();
        getchar();

    } while (choice != 6);

    return 0;
}
