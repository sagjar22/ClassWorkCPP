#include <iostream>
#include <ctime>

using namespace std;

//1
void sortArray(int arr[], int size, bool reverse = false)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (reverse)
            {
                if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

//2
void insertionSort(int arr[], int start, int end, bool desc)
{
    for (int i = start + 1; i <= end; i++)
    {
        int key = arr[i];
        int j = i - 1;

        if (desc)
        {
            while (j >= start && arr[j] < key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        else
        {
            while (j >= start && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
        }

        arr[j + 1] = key;
    }
}

void sectionSort(int arr[], int size)
{
    int mid = size / 2;

    insertionSort(arr, 0, mid - 1, true);
    insertionSort(arr, mid, size - 1, false);
}

//3
void sortBetweenNegatives(int arr[], int size)
{
    int leftNeg = -1;
    int rightNeg = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            leftNeg = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            rightNeg = i;
            break;
        }
    }

    if (leftNeg == -1 , rightNeg == -1  , leftNeg >= rightNeg - 1)
    {
        cout << "Cannot sort between negative elements.\n";
        return;
    }

    for (int i = leftNeg + 1; i < rightNeg - 1; i++)
    {
        for (int j = leftNeg + 1; j < rightNeg - (i - leftNeg); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Leftmost negative index: " << leftNeg << endl;
    cout << "Rightmost negative index: " << rightNeg << endl;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //Task 1 - Given an array of numbers with a size of 10 elements. Write a function that sorts the array in ascending or descending order, depending on the third parameter of the function. If it is true, the sorting is in descending order; if false, in ascending order. The first two parameters of the function are the array and its size, and the third parameter defaults to false.

    int arr1[10] = { 10, 5, 3, 2, 6, 7, 9, 1, 9, 7 };

    cout << "Original array:\n";
    printArray(arr1, 10);

    sortArray(arr1, 10, false);

    cout << "Ascending sort:\n";
    printArray(arr1, 10);

    sortArray(arr1, 10, true);

    cout << "Descending sort:\n";
    printArray(arr1, 10);

    //Task 2 - Write a function that sorts the first half of an array in descending order and the second half in ascending order, using insertion sort.

    int arr2[10] = { 10, 5, 3, 2, 6, 7, 9, 1, 9, 7 };

    cout << "\nOriginal array:\n";
    printArray(arr2, 10);

    sectionSort(arr2, 10);

    cout << "Sorted array:\n";
    printArray(arr2, 10);

    //Task 3 - The function receives an array of random numbers in the range from -20 to +20. It is necessary to find the positions of the extreme negative elements (the leftmost negative element and the rightmost negative element) and sort the elements located between them.

    srand(time(0));

    const int SIZE = 15;
    int arr3[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr3[i] = rand() % 41 - 20;
    }

    cout << "\nOriginal random array:\n";
    printArray(arr3, SIZE);

    sortBetweenNegatives(arr3, SIZE);

    cout << "Array after sorting between negatives:\n";
    printArray(arr3, SIZE);
}