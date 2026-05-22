#include <iostream>

using namespace std;

int main()
{
    // Task 1
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "The number is even" << '\n';
    else
        cout << "The number is odd" << '\n';

    cout << '\n';

    // Task 2
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < b)
        cout << "Smaller number: " << a << '\n';
    else
        cout << "Smaller number: " << b << '\n';

    cout << '\n';

    // Task 3
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "Positive number" << '\n';
    else if (number < 0)
        cout << "Negative number" << '\n';
    else
        cout << "The number is zero" << '\n';

    cout << '\n';

    // Task 4
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (x == y)
        cout << "Numbers are equal" << '\n';
    else if (x < y)
        cout << x << " " << y << '\n';
    else
        cout << y << " " << x << '\n';

    cout << '\n';

    // Task 5
    int mark1, mark2, mark3, mark4, mark5;

    cout << "Enter 5 marks: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

    double average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;

    if (average >= 4)
        cout << "Student is admitted to the exam" << '\n';
    else
        cout << "Student is not admitted to the exam" << '\n';

    cout << '\n';

    // Task 6
    int value;

    cout << "Enter a number: ";
    cin >> value;

    if (value % 2 == 0)
        value *= 3;
    else
        value /= 2;

    cout << "Result: " << value << '\n';

    cout << '\n';

    // Task 7
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+ - * /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Result: " << num1 + num2 << '\n';
        break;

    case '-':
        cout << "Result: " << num1 - num2 << '\n';
        break;

    case '*':
        cout << "Result: " << num1 * num2 << '\n';
        break;

    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << '\n';
        else
            cout << "Division by zero is impossible" << '\n';
        break;

    default:
        cout << "Invalid operation" << '\n';
    }

    cout << '\n';
    // Task 8
    double base;
    int power;
    double result = 1;

    cout << "Enter a number: ";
    cin >> base;

    cout << "Enter power (0-7): ";
    cin >> power;

    switch (power)
    {
    case 0:
        result = 1;
        break;

    case 1:
        result = base;
        break;

    case 2:
        result = base * base;
        break;

    case 3:
        result = base * base * base;
        break;

    case 4:
        result = base * base * base * base;
        break;

    case 5:
        result = base * base * base * base * base;
        break;

    case 6:
        result = base * base * base * base * base * base;
        break;

    case 7:
        result = base * base * base * base * base * base * base;
        break;

    default:
        cout << "Invalid power" << '\n';
        return 0;
    }

    cout << "Result: " << result << '\n';

}