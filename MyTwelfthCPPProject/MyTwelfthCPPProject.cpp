#include <iostream>
#include <Windows.h>

using namespace std;

// Функція, яка отримує рядок та повертає кількість символів у рядку
int myStrlen(const char* arr) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}


int main()
{
    char str1[] = "Hello, ", str2[] = "world!";
    const int size = strlen(str1) + strlen(str2) + 1;
    char* result = new char[strlen(str1) + strlen(str2) + 1]; // Hello, world!\0

    strcpy_s(result, size, str1);
    strcat_s(result, size, str2);

    cout << result << '\n';

    delete[] result;

   
    //char myStr[] = "hello, world!";
  
    //char* ptr = myStr;

    //myStr = "goodbye"; // переписати значення статичного масиву не можна

    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);

    //char32_t emoji = U'😡';

    //cout << emoji << '\n';

    //cout << (char)165 << '\n';

    //cout << (int)'H' << '\n';
    //cout << (int)'9' << '\n';
    //cout << (int)'#' << '\n';

    //cout << (int)'A' << ' ' << (int)'a' << '\n';
    //cout << ('A' > 'a') << '\n';

    //string myStr = "Hello World!";
    //cout << myStr << '\n';
    //string ЗАБОРОНЕНО ВИКОРИСТОВУВАТИ
    
    //char myStr[] = "hello, world!"; // strin (рядки) в стилі C

    //cout << myStr << '\n';

    //char myStr2[5]; //TTTTT

    //for (int i = 0; i < 5; i++) {
    //    myStr2[i] = 'T';
    //}
    //myStr2[4] = '\0'; // нуль - термінатор
    //cout << myStr2 << '\n';
}
