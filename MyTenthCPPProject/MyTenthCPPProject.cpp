#include <iostream>

using namespace std;

void ChangeValue(int number) {
	number += 10;
}

void ChangeValue(int* number) {
	number += 10;
}

template<typename T>
void SwapValues(T* val1, T* val2) {
	T temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

template<typename T>
T* linearsearch(T arr[], int size, T value) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			return &arr[i];
		}
	}
	return nullptr;
}

int main()
{
	int arr[] = { 10,4,56,3,67,};

	int* searchElem = linearsearch(arr, 5, 3);

	cout << *searchElem << '\n';

	if (searchElem != nullptr)
	{
		cout << *searchElem << '\n';
	}
	else {
		cout << "Search Failed\n";
	}

	//int x = 10;
	//int z = 12;

	//cout << x << ' ' << z << '\n';
	//SwapValues(&x, &z);
	//cout << x << ' ' << z << '\n';

	//cout << x << '\n';
	//ChangeValue(&x);
	//cout << x << '\n';

	//int arr[] = { 10,12,13 };

	//cout << arr << '\n';
	//cout << "Adress of x variable: " << & x << '\n';

	//int* ptr = &x;

	//cout << "Value of pointer 'ptrX':" << ptr << '\n';
	//cout << "Size of pointer 'ptrX':" << sizeof(ptr) << '\n';
	//cout << "Value stored by adress: " << *ptr << '\n';

	//*ptr = 15;
	//cout << "Value of 'x' variable: " << x << '\n';

	//*ptr += 5;
	//cout << "Value of 'x' variable: " << x << '\n';

	//int y = -49;

	//ptr = &y;
	//cout << "Adress of 'y' variable: " << &y << '\n';
	//cout << "Value of 'y' variable: " << ptr << '\n';
	//cout << "Value of 'y' variable: " << *ptr << '\n';


	//double number = 15.6;

	//double* ptr1 = &number;
	//double* ptr2 = &number;

	//cout << "Adress of number variable: " << &number << '\n';
	//cout << "Value of ptr1 pointer: " << ptr1 << '\n';
	//cout << "Value of ptr2 pointer: " << ptr2 << '\n';

	//float a = 1.3f, b = -3.4f;

	//float* const ptrF = &a; // константний 

	//cout << *ptrF << '\n';

	//*ptrF = 4.5f;

	//cout << *ptrF << '\n';

	////ptrF = &b; // не можна

	//const float* ptrOnConst = &b;
	//cout << *ptrOnConst << '\n';

	//ptrOnConst = &a;
	//cout << *ptrOnConst << '\n';

	//const float PI = 3.14f;
	//const float* ptrPI = &PI;

	//const float* const ptr = &PI;

}
