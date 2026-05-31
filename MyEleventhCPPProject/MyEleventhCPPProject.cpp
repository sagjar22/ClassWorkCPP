#include <iostream>

using namespace std;

template<typename T>
void SwapValues(T& val1, T& val2) {
	T temp = val1;
	val1 = val2;
	val2 = temp;
}

void PrintArr(const int* arr, const int& size) {
	for (int i = 0; i < size; i++) {
		//arr[i] = 12;
		//size = 123;
		cout << arr[i] << '\n';
	}
}

int& badFunction() {
	int number = 10;
	return number;
}

int& rmax(int arr[], int size) {
	int maxIndex = 0;
	for (int i = 1; i < size; i++) {
		maxIndex = (arr[maxIndex] > arr[i]) ? maxIndex : i;
	}
	return arr[maxIndex];
}



int main()
{
	int* AddGrade(int* grades, int& size, int newGrade) {
		int* temp = new int[++size];
		for (int i = 0; i < size - 1; i++) {
			temp[i] = grades[i];
		}
		temp[size - 1] = newGrade;
		return temp;
	}

	int arr[] = { 10,4,56,4 };
	int& arrMax = rmax(arr, 4);
	PrintArr(arr, 4);
	cout << "------\n";
	cout << arrMax << '\n';
	cout << "------\n";
	arrMax = -40;
	PrintArr(arr, 4);

	//int& num = badFunction();
	//cout << num << '\n';


	//int arr[] = { 10,4,56,4 };
	//PrintArr(arr, 4);

	//int number = 12345;
	//const int& ref = number;
	//ref = 2345; // константне посилання
	//number = 132;


	//const double PI = 3.14;
	//const double& ref = PI;
	//ref = 12.5;


	//int a = 10, b = 12;
	//cout << "a: " << a << " --- b: " << b << '\n';
	//SwapValues(a, b);
	//cout << "a: " << a << " --- b: " << b << '\n';

	//int var = 1234;
	//int* ptr = &var;
	//int& ref = var;

	//int var2 = 9876;

	//cout << var << '\n';
	//cout << ref << '\n';
	//cout << var2 << '\n';

	//ref = var2;

	//cout << var << '\n';
	//cout << ref << '\n';
	//cout << var2 << '\n';



	//cout << "var is: " << var << '\n';
	//cout << "ptr is: " << *ptr << '\n';
	//cout << "ref is: " << ref << '\n';

	//cout << "adress var is: " << &var << '\n';
	//cout << "adress int ptr is: " << ptr << '\n';
	//cout << "adress of ptr is: " << &ptr << '\n';
	//cout << "adress ref is: " << &ref << '\n';
}

