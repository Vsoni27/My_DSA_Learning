#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int choice;
        cout << "1. Addition" << endl;
        cout << "2. subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter one of the four choices: ";
        cin >> choice;

        double n1, n2;
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;

        double result;
        if (choice == 1)
        {
            result = n1 + n2;
            cout << n1 << " + " << n2 << " = " << result << endl;
        }
        else if (choice == 2)
        {
            result = n1 - n2;
            cout << n1 << " - " << n2 << " = " << result << endl;
        }
        else if (choice == 3)
        {
            result = n1 * n2;
            cout << n1 << " X " << n2 << " = " << result << endl;
        }
        else if (choice == 4)
        {
            result = n1 / n2;
            cout << n1 << " / " << n2 << " = " << result << endl;
        }
    }

    return 0;
}