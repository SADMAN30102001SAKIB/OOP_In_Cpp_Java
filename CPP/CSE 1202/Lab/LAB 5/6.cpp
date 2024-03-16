#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;

vector<int> ax;

void displayList()
{
    if (!ax.empty())
    {
        cout << "Linked List elements: ";
        for (int element : ax)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Linked List is empty." << endl;
    }
}

void insertAtFirst(int data)
{
    ax.insert(ax.begin(), data);
    cout << "Inserted " << data << " at the beginning of the linked list." << endl;
}

void insertAtLast(int data)
{
    ax.push_back(data);
    cout << "Appended " << data << " to the end of the linked list." << endl;
}

void insertBefore(int newData, int existingData)
{
    auto it = find(ax.begin(), ax.end(), existingData);
    if (it != ax.end())
    {
        ax.insert(it, newData);
        cout << "Inserted " << newData << " before " << existingData << " in the linked list." << endl;
    }
    else
    {
        cout << existingData << " not found in the linked list. Insertion failed." << endl;
    }
}

void insertAfter(int newData, int existingData)
{
    auto it = find(ax.begin(), ax.end(), existingData);
    if (it != ax.end())
    {
        ax.insert(it + 1, newData);
        cout << "Inserted " << newData << " after " << existingData << " in the linked list." << endl;
    }
    else
    {
        cout << existingData << " not found in the linked list. Insertion failed." << endl;
    }
}

void deleteElement(int data)
{
    auto it = find(ax.begin(), ax.end(), data);
    if (it != ax.end())
    {
        ax.erase(it);
        cout << "Deleted " << data << " from the linked list." << endl;
    }
    else
    {
        cout << data << " not found in the linked list. Deletion failed." << endl;
    }
}

void searchElement(int data)
{
    auto it = find(ax.begin(), ax.end(), data);
    if (it != ax.end())
    {
        cout << data << " found in the linked list." << endl;
    }
    else
    {
        cout << data << " not found in the linked list." << endl;
    }
}

int main()
{
    int choice, data;

    do
    {
        system("cls");

        cout << "**** Main Menu ****" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int subChoice;
            while (true)
            {
                system("cls");

                cout << "**** Insert Sub Menu ****" << endl;
                cout << "1. Insert at First" << endl;
                cout << "2. Insert at Last" << endl;
                cout << "3. Insert Before" << endl;
                cout << "4. Insert After" << endl;
                cout << "5. Exit" << endl;
                cout << "Enter your option: ";
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                    cout << "Enter data to insert at the beginning: ";
                    cin >> data;
                    insertAtFirst(data);
                    break;
                case 2:
                    cout << "Enter data to insert at the end: ";
                    cin >> data;
                    insertAtLast(data);
                    break;
                case 3:
                    int existingData;
                    cout << "Enter existing data: ";
                    cin >> existingData;
                    cout << "Enter new data to insert before: ";
                    cin >> data;
                    insertBefore(data, existingData);
                    break;
                case 4:
                    cout << "Enter existing data: ";
                    cin >> existingData;
                    cout << "Enter new data to insert after: ";
                    cin >> data;
                    insertAfter(data, existingData);
                    break;
                case 5:
                    break;
                default:
                    cout << "Invalid sub-menu option. Please try again." << endl;
                }
                if (subChoice == 5)
                {
                    break;
                }
            }
            break;
        case 2:
            cout << "Enter data to delete: ";
            cin >> data;
            deleteElement(data);
            break;
        case 3:
            cout << "Enter data to search: ";
            cin >> data;
            searchElement(data);
            break;
        case 4:
            displayList();
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
