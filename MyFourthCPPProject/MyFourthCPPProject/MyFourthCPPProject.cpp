#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    
    /*int number = (int)45.7;  - yavne and zvusguvalne
    float num = 36.7;  - neyavne and zvusguvalne
    float num2 = 10;  - neyavne and zvusguvalne*/
    //int numbers[size] = { 25,42,52,67,69 };
    //char symbols[5] = { 'd', 'o', 't', 'a', '2'};
    //bool booleans[6];
    //numbers[0] = 10;
    //int counter = 0;


    const int size = 5;
    int sum = 0;
    int numbers[size] = { 10 ,12 ,13 ,15 ,16 };

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    //auto symbol = 'k';

    for (auto num : numbers) {
        cout << num << ' ';
        num = 10;
    }
    cout << '\n';
    cout << "Sum: " << sum << '\n';
    

   /* for (int i = 0; i < size; i++) {
        numbers[i] = i;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << ' ';
    }*/


    /*while (counter < size) {
        numbers(counter) = counter++;
    }*/


    //cout << symbols[2] << '\n';
    /*cout << sizeof(size) << '\n';
    cout << sizeof(numbers) << '\n';
    cout << numbers << '\n';
    cout << booleans << '\n';*/

    /*cout << numbers[6] << '\n';*/


    /*int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[3] = 3;*/
}