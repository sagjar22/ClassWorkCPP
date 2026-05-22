#include <iostream>

using namespace std;

int sum(int, int);


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    //cout << i;
}

//void showGreetings() {
//    cout << "==========HELL==========\n";
//}

//int number = 10; // глобальна зміна 

//void incrementNumber(int num) {
//    num++;
//    cout << &num << '\n';
//}


void incrementNumber(int num) {
    cout << &num << '\n';
    return (++num);
}

double sum(double num1, double num2) {
    return num1 + num2;
}

int sum(int num1, int num2) {
    return num1 + num2;
}

void fillArrayRandom(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

int main()
{
    cout << sum(10, 22) << '\n';
    cout << sum(12.5 , )


    srand(time(NULL));

    const int size = 20;
    int arr[size] = { 10 ,34 ,56 ,78 ,5 ,33 ,123 ,41 };

    printArray(arr, size);
    fillArrayRandom(arr, size, -20, 20);
    printArray(arr, size);

    


    /*int number = 10;

    number = incrementNumber(number);

    cout << &number << '\n';

    cout << number << '\n';*/

    /*int number = 10;

    incrementNumber(number);

    cout << &number << '\n';

    cout << number << '\n';*/

    /* {
         int number = 10;
     }*/

     //cout << number;

     //cout << showGreetings << '\n';
     //cout << size;

    /* showGreetings();*/

     /*const int size = 5;
     int arr[size] = { 1,5,6,7,6 };

     printArray(arr, size);*/
}

