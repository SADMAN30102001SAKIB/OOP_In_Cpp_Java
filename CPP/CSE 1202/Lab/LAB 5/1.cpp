#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};

    try
    {
        cout << "Enter index: ";
        scanf("%d", &i);

        if (i >= 0 && i < 5)
        {
            throw i;
        }
        else if (i >= 5)
        {
            throw "Out of Range Error";
        }
        else
        {
            throw(&i); // for default constructor
        }
    }
    catch (const int index)
    {
        cout << "ax[" << index << "] = " << ax[index] << endl;
    }
    catch (const char *error)
    {
        cout << error << endl;
    }
    catch (...)
    {
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}
