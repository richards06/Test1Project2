/*Program File Name : Test1Project1
Programmer : Josh Richards
Date : October 11, 2024
Requirements :
Create a C++ program that does the following :

Create a Calculator Program that allows the user to choose 1 of 5 arithmetic operations:

1. Add
2. Subtract
3. Multiplication
4. Division
5. Power

The user should enter the number of the operation and then
be prompted for the necessary input and display the result.
You do NOT need to make the program allow for more than 1 operation
during the run of the program. However you will receive 5 additional points
if you make the calculator repeatable so that the user doesn't have restart the program
when they want to perform another operation.


*/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        double num1, num2, result;
        int operation;

        cout << "Calculator Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Power" << endl;
        cout << "Choose an operation (1-5); " << endl;
        cin >> operation;

        if (operation < 1 || operation >5) {
            cout << "Invalid operation! Please choose between 1 and 5." << endl;
            continue;
        }
        cout << "Enter the first number:  ";
        cin >> num1;

        if (operation != 5) {
            cout << "Enter the second number:  ";
            cin >> num2;
        }
        switch (operation) {
        case 1:
            result = num1 + num2;
            cout << "Result:  " << num1 << "+" << num2 << "=" << result << endl;
            break;

        case 2:
            result = num1 - num2;
            cout << "Result:  " << num1 << "-" << num2 << "=" << result << endl;
            break;

        case 3:
            result = num1 * num2;
            cout << "Result:  " << num1 << "*" << num2 << "=" << result << endl;
            break;

        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            else {
                result = num1 / num2;
                cout << "Result:  " << num1 << "/" << num2 << "=" << result << endl;
            }
            break;

        case 5:
            result = pow(num1, 2);
            cout << "Result:  " << num1 << "^2=" << result << endl;
            break;

        }
        cout << "Would you like to perform another operation? (y/n): ";
        cin >> repeat;
    }

    cout << "Thank you for using the calculator! Goodbye!" << endl;

    return 0;
}