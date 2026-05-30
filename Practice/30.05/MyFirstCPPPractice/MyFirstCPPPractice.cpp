#include <iostream>

using namespace std;

// Task 1: Using pointers and the dereference operator, determine the largest of two numbers.
template <typename T>
void FindMax(T* a, T* b) {
    if (*a > *b)
        cout << *a << endl;
    else
        cout << *b << endl;
}

// Task 2: Using pointers and the dereference operator, determine the sign of a number entered from the keyboard.
template <typename T>
void CheckSign(T* number) {
    if (*number > 0)
        cout << "Positive" << endl;
    else if (*number < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

// Task 3: Using pointers and the dereference operator, swap the values of two variables.
template <typename T>
void SwapValues(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Task 4: Write a primitive calculator using only pointers.
template <typename T>
void Calculator(T* a, T* b, char op) {
    switch (op) {
    case '+': cout << *a + *b << endl; break;
    case '-': cout << *a - *b << endl; break;
    case '*': cout << *a * *b << endl; break;
    case '/':
        if (*b != 0) cout << *a / *b << endl;
        else cout << "Error" << endl;
        break;
    default: cout << "Error" << endl;
    }
}

// Task 5: Using a pointer to an array of integers, calculate the sum of the array elements using pointer arithmetic and dereferencing.
int SumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }
    return sum;
}

int main() {
    // 1
    int x = 15, y = 27;
    FindMax(&x, &y);

    // 2
    int numCheck;
    cin >> numCheck;
    CheckSign(&numCheck);

    // 3
    int a = 10, b = 20;
    SwapValues(&a, &b);

    // 4
    double n1, n2;
    char op;
    cin >> n1 >> n2 >> op;
    Calculator(&n1, &n2, op);

    // 5
    int arr[] = { 1, 2, 3, 4, 5 };
    cout << SumArray(arr, 5) << endl;
}
