#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int stacknew[10];
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> stacknew[i];
    }

    int answer = 1;
    while (true)
    {
        cout << "\nAdd more numbers? \nPress 1 for YES or 0 for NO: ";
        cin >> answer;
        if (answer == 0)
        {
            break;
        }
        else
        {
            cout << "Enter 5 more numbers:" << endl;
            for (int i = 5; i < 10; i++)
            {
                cin >> stacknew[i];
            }
            cout << "The values in the stack are:  " << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << stacknew[i] << endl;
            }
        }
    }
}