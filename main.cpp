#include <iostream>
#include <string>
using namespace std;

int readInt(string prompt)
{
    int x;
    while (true)
    {
        cout << prompt;
        cin >> x;
        if (!cin.fail())
        {
            cin.ignore(1000, '\n');
            return x;
        }
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "ERROR: this is not a number, try again\n";
    }
}

int main()
{
    int table = readInt("Enter the table number: ");
    int score = 0;

    for (int i = 1; i <= 12; i++)
    {
        int answer = table * i;
        bool firstTry = true;
        cout << "What is " << table << " x " << i;
        int choice = readInt(" : ");
        while (choice != answer)
        {
            firstTry = false;
            choice = readInt("Wrong, try again: ");
        }
        cout << "Correct!\n";
        if (firstTry)
            score++;
    }
    cout << "\nThe final mark: " << score << " / 12\n";
}