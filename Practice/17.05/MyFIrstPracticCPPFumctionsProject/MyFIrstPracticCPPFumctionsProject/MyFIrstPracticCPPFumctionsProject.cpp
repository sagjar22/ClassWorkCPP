#include <iostream>


using namespace std;

//Task 1. Write a function that displays a rectangle on the screen with height N and width K.
void printArectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++)
            cout << "*";
        cout << '\n';
    }
}
//Task 2. Write a function that calculates the factorial of the number passed to it.
int printFactorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++)
        result *= i;
    return result;
}
//Task 3. Write a function that checks whether the number passed to it is prime. A number is called prime if it is divisible without a remainder only by itself and by one.
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
//Task 4. Write a function that returns the cube of a number.
int printCubeOfNumber(int num) {
    return num * num * num;
}
//Task 5. Write a function to find the largest of two numbers.
int printMaxOfTwo(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
//Task 6. Write a function that returns true if the given value is positive and false if it is negative.
bool isPositive(int num) {
    return num > 0;
}
//Task 7. Write a function that displays the minimum and maximum (values and indices) of the elements of the array passed to it.
void printMinAndMaxArray(int arr[], int size) {
    int min = arr[0], max = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Min in massive is: " << min << "\nIndex of min in massive is: " << minIndex << '\n';
    cout << "Max in massive is: " << max << "\nIndex of max in massive is: " << maxIndex << '\n';
}
//Task 8. Write a function that changes the order of traversal of the array passed to it to the opposite.
void printReversArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
//Task 9. Write a function that returns the number of prime numbers in the array passed to it.
int printCountPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]))
            count++;
    }
    return count;
}

int main()
{
    cout << "Task 1. - Arectangle\n";
    printArectangle(4, 5);

    cout << "Task 2. - Factorial 5 is: " << printFactorial(5) << '\n';

    cout << "Task 3. - Prime 2 is: " << isPrime(4) << '\n';

    cout << "Task 4. - Cube of number 2 is: " << printCubeOfNumber(2) << '\n';

    cout << "Task 5. - The max of two nums is: " << printMaxOfTwo(1,59) << '\n';

    cout << "Task 6. - The num is positive -  " << isPositive(67) << '\n';

    //Massive for tasks  7-9
    int arr[] = {1488,123,5,6,7,5,7,1,9,100};
    int size = 10;

    cout << "Task 7. The max and min is - \n"; 
    printMinAndMaxArray(arr, size);

    cout << "Task 8. The reverse of array is: ";
    printReversArray(arr, size);
    for (int i = 0; i < size; i++) 
    cout << arr[i] << ' ';
    cout << '\n';

    cout << "Task 9. The prime number in massive is: " << printCountPrimes(arr,size) << '\n';

    cout << "All Task from 1 to 9 ready thx for check!";
}

