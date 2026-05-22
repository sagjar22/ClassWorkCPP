#include <iostream>

using namespace std;

int main()
{
    // Task 1
    int profit[12];
    int sum = 0;
    int maxMonth = 0, minMonth = 0;

    cout << "Enter monthly profit:\n";

    for (int i = 0; i < 12; i++)
    {
        cin >> profit[i];
        sum += profit[i];

        if (profit[i] > profit[maxMonth])
            maxMonth = i;

        if (profit[i] < profit[minMonth])
            minMonth = i;
    }

    double avg = sum / 12.0;

    cout << "Total profit: " << sum << '\n';
    cout << "Average profit: " << avg << '\n';
    cout << "Max month: " << maxMonth + 1 << '\n';
    cout << "Min month: " << minMonth + 1 << '\n';

    cout << '\n';

    // Task 2
    int arr1[10];

    cout << "Enter 10 elements:\n";

    for (int i = 0; i < 10; i++)
        cin >> arr1[i];

    cout << "Reverse order:\n";

    for (int i = 9; i >= 0; i--)
        cout << arr1[i] << '\n';

    cout << '\n';

    // Task 3
    int pentagon[5];
    int perimeter = 0;

    cout << "Enter 5 sides of pentagon:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> pentagon[i];
        perimeter += pentagon[i];
    }

    cout << "Perimeter: " << perimeter << '\n';

    cout << '\n';

    // Task 4
    int arr2[9];
    int compressed[9];
    int index = 0;

    cout << "Enter 9 elements:\n";

    for (int i = 0; i < 9; i++)
        cin >> arr2[i];

    for (int i = 0; i < 9; i++)
    {
        if (arr2[i] != 0)
        {
            compressed[index] = arr2[i];
            index++;
        }
    }

    while (index < 9)
    {
        compressed[index] = -1;
        index++;
    }

    cout << "Compressed array:\n";

    for (int i = 0; i < 9; i++)
        cout << compressed[i] << '\n';

    cout << '\n';

    // Task 5
    int a[5], b[5], result[10];
    int pos = 0;

    cout << "Enter first array (5 elements):\n";

    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter second array (5 elements):\n";

    for (int i = 0; i < 5; i++)
        cin >> b[i];

    for (int i = 0; i < 5; i++)
        if (a[i] > 0)
            result[pos++] = a[i];

    for (int i = 0; i < 5; i++)
        if (b[i] > 0)
            result[pos++] = b[i];

    for (int i = 0; i < 5; i++)
        if (a[i] == 0)
            result[pos++] = 0;

    for (int i = 0; i < 5; i++)
        if (b[i] == 0)
            result[pos++] = 0;

    for (int i = 0; i < 5; i++)
        if (a[i] < 0)
            result[pos++] = a[i];

    for (int i = 0; i < 5; i++)
        if (b[i] < 0)
            result[pos++] = b[i];

    cout << "Result array:\n";

    for (int i = 0; i < 10; i++)
        cout << result[i] << '\n';

}