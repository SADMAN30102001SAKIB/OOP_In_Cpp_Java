#include <iostream>

using namespace std;

const int MAX_MEMBERS = 100;

struct Member
{
    int id;
    double height;
    double weight;
};

double calculateBMI(double weight, double height)
{
    return weight / (height * height);
}

string getBMIClassification(double bmi)
{
    if (bmi < 16)
        return "Severe Thinness";
    else if (bmi < 17)
        return "Moderate Thinness";
    else if (bmi < 18.5)
        return "Mild Thinness";
    else if (bmi < 25)
        return "Normal";
    else if (bmi < 30)
        return "Overweight";
    else if (bmi < 35)
        return "Obese Class I";
    else if (bmi < 40)
        return "Obese Class II";
    else
        return "Obese Class III";
}

void addMember(Member members[], int *numMembers)
{
    if (*numMembers >= MAX_MEMBERS)
    {
        cout << "Maximum number of members reached." << endl;
        return;
    }

    Member newMember;
    cout << "Enter Member ID: ";
    cin >> newMember.id;

    for (int i = 0; i < *numMembers; i++)
    {
        if (members[i].id == newMember.id)
        {
            cout << "Sorry Member ID already exists...try again" << endl;
            return;
        }
    }

    cout << "Enter Height (m): ";
    cin >> newMember.height;
    cout << "Enter Weight (Kg): ";
    cin >> newMember.weight;
    members[(*numMembers)++] = newMember;
    cout << "Successfully Added" << endl;
}

void updateMember(Member members[], int *numMembers)
{
    int memberId;
    cout << "Enter Member ID: ";
    cin >> memberId;
    bool found = false;
    for (int i = 0; i < *numMembers; i++)
    {
        if (members[i].id == memberId)
        {
            cout << "Enter new Height (m): ";
            cin >> members[i].height;
            cout << "Enter new Weight (Kg): ";
            cin >> members[i].weight;
            found = true;
            cout << "Member updated successfully" << endl;
            break;
        }
    }
    if (!found)
        cout << "Member not found" << endl;
}

void removeMember(Member members[], int *numMembers)
{
    int memberId;
    cout << "Enter Member ID: ";
    cin >> memberId;
    bool found = false;
    for (int i = 0; i < *numMembers; i++)
    {
        if (members[i].id == memberId)
        {
            for (int j = i; j < *numMembers - 1; j++)
            {
                members[j] = members[j + 1];
            }
            (*numMembers)--;
            found = true;
            cout << "Member removed successfully" << endl;
            break;
        }
    }
    if (!found)
        cout << "Member not found" << endl;
}

void findMaxHeightAndWeight(Member members[], int *numMembers)
{
    if (*numMembers == 0)
    {
        cout << "No members available" << endl;
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < *numMembers; i++)
    {
        if (members[i].height > members[maxIndex].height)
            maxIndex = i;
    }
    cout << "Max Height: " << members[maxIndex].height << " m"
         << " of member: " << members[maxIndex].id << endl;

    maxIndex = 0;
    for (int i = 1; i < *numMembers; i++)
    {
        if (members[i].weight > members[maxIndex].weight)
            maxIndex = i;
    }
    cout << "Max Weight: " << members[maxIndex].weight << " Kg"
         << " of member: " << members[maxIndex].id << endl;
}

void findMinHeightAndWeight(Member members[], int *numMembers)
{
    if (*numMembers == 0)
    {
        cout << "No members available" << endl;
        return;
    }

    int minIndex = 0;
    for (int i = 1; i < *numMembers; i++)
    {
        if (members[i].height < members[minIndex].height)
            minIndex = i;
    }
    cout << "Min Height: " << members[minIndex].height << " m"
         << " of member: " << members[minIndex].id << endl;

    minIndex = 0;
    for (int i = 1; i < *numMembers; i++)
    {
        if (members[i].weight < members[minIndex].weight)
            minIndex = i;
    }
    cout << "Min Weight: " << members[minIndex].weight << " Kg"
         << " of member: " << members[minIndex].id << endl;
}

void calculateAverageHeightAndWeight(Member members[], int *numMembers)
{
    if (*numMembers == 0)
    {
        cout << "No members available" << endl;
        return;
    }

    double totalHeight = 0;
    double totalWeight = 0;
    for (int i = 0; i < *numMembers; i++)
    {
        totalHeight += members[i].height;
        totalWeight += members[i].weight;
    }
    double averageHeight = totalHeight / *numMembers;
    double averageWeight = totalWeight / *numMembers;
    cout << "Average Height: " << averageHeight << " m" << endl;
    cout << "Average Weight: " << averageWeight << " Kg" << endl;
}

void displayBMIClassification(Member members[], int *numMembers)
{
    int memberId;
    cout << "Enter Member ID: ";
    cin >> memberId;
    bool found = false;
    for (int i = 0; i < *numMembers; i++)
    {
        if (members[i].id == memberId)
        {
            double bmi = calculateBMI(members[i].weight, members[i].height);
            cout << "BMI = " << bmi << endl;
            cout << "Classification: " << getBMIClassification(bmi) << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Member not found" << endl;
}

void displayAll(Member members[], int *numMembers)
{
    if (*numMembers)
    {
        int i;
        cout << "\n-----------------------" << endl;
        cout << "ID\tHeight\tWeight" << endl;
        for (i = 0; i < *numMembers; i++)
        {
            cout << members[i].id << "\t" << members[i].height << "\t" << members[i].weight << endl;
        }
        cout << "\nTotal Members:" << *numMembers << endl;
        cout << "-----------------------" << endl;
    }
    else
    {
        cout << "No members available" << endl;
    }
}

int displayMainMenu()
{
    int choice;
    cout << "********** Main Menu ********" << endl;
    cout << "1. Add Member" << endl;
    cout << "2. Update Member" << endl;
    cout << "3. Remove Member" << endl;
    cout << "4. Max Height & Weight" << endl;
    cout << "5. Min Height and Weight" << endl;
    cout << "6. Average Height and Weight" << endl;
    cout << "8. Display All" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter Your option(1-8): ";
    cin >> choice;
    return choice;
}

void processChoice(int choice, Member members[], int *numMembers)
{
    switch (choice)
    {
    case 1:
        addMember(members, numMembers);
        break;
    case 2:
        updateMember(members, numMembers);
        break;
    case 3:
        removeMember(members, numMembers);
        break;
    case 4:
        findMaxHeightAndWeight(members, numMembers);
        break;
    case 5:
        findMinHeightAndWeight(members, numMembers);
        break;
    case 6:
        calculateAverageHeightAndWeight(members, numMembers);
        break;
    case 7:
        displayBMIClassification(members, numMembers);
        break;
    case 8:
        displayAll(members, numMembers);
        break;
    case 0:
        cout << "Exiting program..." << endl;
        break;
    default:
        cout << "Invalid option. Please try again." << endl;
    }
}

int main()
{
    int choice, numMembers = 0;
    Member members[MAX_MEMBERS];

    do
    {
        choice = displayMainMenu();
        processChoice(choice, members, &numMembers);
        if (choice)
        {
            cout << "Press any key to go to the main menu..." << endl;
            getchar();
            getchar();
        }

    } while (choice);

    return 0;
}
