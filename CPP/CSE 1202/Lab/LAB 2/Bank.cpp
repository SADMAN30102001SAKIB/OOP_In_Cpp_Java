#include <iostream>
using namespace std;

class Bank
{
private:
    int id;
    float amount;
    static int n;

public:
    // i)
    Bank()
    {
        id = 0;
        amount = 0;
        n++;
    }

    // ii)
    Bank(int ID, float Amount)
    {
        id = ID;
        amount = Amount;
        n++;
    }

    // iii)
    Bank(Bank &member)
    {
        id = member.id;
        amount = member.amount;
        n++;
    }

    // iv)
    void setIdAndAmount(int ID, float Amount)
    {
        id = ID;
        amount = Amount;
    }

    // v)
    void changeAmount(float Namount)
    {
        amount += Namount;
    }

    // vi)
    int displayTotalClients()
    {
        return n;
    }

    // vii)
    void displayClientInfo() const
    {
        cout << "Client ID: " << id << ", Amount: " << amount << ", Total clients: " << n << endl;
    }

    float getAmount()
    {
        return amount;
    }
};

int Bank::n = 0;

int main()
{
    // viii)
    Bank clients[3];
    clients[0].setIdAndAmount(101, 5000.0);

    Bank client(102, 3000.0);

    clients[1].setIdAndAmount(103, 7000.0);

    clients[2] = clients[1];
    clients[2].changeAmount(8000.0);

    clients[0].displayClientInfo();
    client.displayClientInfo();
    clients[1].displayClientInfo();
    clients[2].displayClientInfo();

    cout << "Total clients in the bank: " << clients[0].displayTotalClients() << endl;

    // ix)
    float total = 0;
    for (int i = 0; i < clients[0].displayTotalClients() - 1; i++)
    {
        total += clients[i].getAmount();
    }
    total += client.getAmount();

    cout << "Total amount in the bank: " << total << endl;

    return 0;
}
