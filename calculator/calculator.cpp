#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
    {
        system("cls");
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square\n";
        cout << "6. Square Root\n";
        cout << "7. Check if a number is prime\n";
        cout << "8. Factorial\n";
        cout << "Enter your choice (1-8): ";

        int operation;
        cin >> operation;

        double num1, num2;

        if (operation == 1)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
        }
        else if (operation == 2)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
        }
        else if (operation == 3)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
        }
        else if (operation == 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by zero!\n";
            }
        }
        else if (operation == 5)
        {
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << num1 * num1 << endl;
        }
        else if (operation == 6)
        {
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0)
            {
                cout << "Result: " << sqrt(num1) << endl;
            }
            else
            {
                cout << "Error: Cannot calculate square root of a negative number!\n";
            }
        }
        else if (operation == 7)
        {
            cout << "Enter a number: ";
            cin >> num1;
            if (isPrime(static_cast<int>(num1)))
            {
                cout << "Result: Prime\n";
            }
            else
            {
                cout << "Result: Not Prime\n";
            }
        }
        else if (operation == 8)
        {
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0 && num1 == static_cast<int>(num1))
            {
                cout << "Result: " << factorial(static_cast<int>(num1)) << endl;
            }
            else
            {
                cout << "Error: Factorial is defined only for non-negative integers!\n";
            }
        }
        else
        {
            cout << "Invalid choice!\n";
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
    }

    return 0;
}
