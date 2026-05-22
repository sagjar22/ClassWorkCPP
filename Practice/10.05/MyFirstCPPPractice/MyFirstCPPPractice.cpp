#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    // Task 1
    int a[10][10];
    int n, m;

    cout << "Enter rows and columns: ";
    cin >> n >> m;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int sum = 0;
    int minVal = a[0][0];
    int maxVal = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];

            if (a[i][j] < minVal)
                minVal = a[i][j];

            if (a[i][j] > maxVal)
                maxVal = a[i][j];
        }
    }

    double avg = sum / (double)(n * m);

    cout << "Sum: " << sum << '\n';
    cout << "Average: " << avg << '\n';
    cout << "Min: " << minVal << '\n';
    cout << "Max: " << maxVal << '\n';

    cout << '\n';

    // Task 2
    int b[10][10];

    cout << "Enter size (n x m): ";
    cin >> n >> m;

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];

    cout << "Row sums:\n";

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < m; j++)
            rowSum += b[i][j];

        totalSum += rowSum;

        cout << rowSum << '\n';
    }

    cout << "Column sums:\n";

    for (int j = 0; j < m; j++)
    {
        int colSum = 0;

        for (int i = 0; i < n; i++)
            colSum += b[i][j];

        cout << colSum << '\n';
    }

    cout << "Total sum: " << totalSum << '\n';

    cout << '\n';

    // Task 3
    int A[5][10];
    int C[5][5];

    cout << "Matrix A (5x10 random 0-50):\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            A[i][j] = rand() % 51;
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }

    cout << '\n';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            C[i][j] = A[i][2 * j] + A[i][2 * j + 1];
        }
    }

    cout << "Matrix C (5x5):\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << C[i][j] << " ";
        cout << '\n';
    }
}