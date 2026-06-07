#include <iostream>

using namespace std;

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
}


int main()
{
    int* ptr = new int[5];
    delete[] ptr;

    int size = 5;
    // void*
    //int* arr = (int*)malloc(sizeof(int) * size);
    int* arr = (int*)calloc(size, sizeof(int));

    printArray(arr, size);

    cout << '\n';

    for (int i = 0; i < size;i++) {
        arr[i] = i * 10;
    }


    printArray(arr, size);

    size = 8;
    arr = (int*)realloc(arr, size * sizeof(int));

    cout << '\n';
    printArray(arr, size);

    free(arr);

    return 0;
}
