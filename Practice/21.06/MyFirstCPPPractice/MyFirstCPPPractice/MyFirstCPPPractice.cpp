#define INTEGER

#include <iostream>
#include "Function.h"


int main()
{
	const int SIZE = 10;

#ifdef INTEGER
	int arr[SIZE];
#endif

#ifdef DOUBLE
	double arr[SIZE];
#endif

#ifdef CHAR
	char arr[SIZE];
#endif

	FillArray(arr, SIZE);

	std::cout << "Array: ";
	ShowArray(arr, SIZE);

	std::cout << "Min: " << FindMin(arr, SIZE) << '\n';
	std::cout << "Max: " << FindMax(arr, SIZE) << '\n';

	SortArray(arr, SIZE);

	std::cout << "Sorted Array: ";
	SortArray(arr, SIZE);

	EditArray(arr, SIZE);

	std::cout << "Changed Array: ";
	ShowArray(arr, SIZE);

}