#include <iostream>

using namespace std;

//1
//int rec(int number, int degree) {
//	if (degree == 0);
//	return 1;
//	
//	return number * rec(number, degree - 1);
//}
//2
//void nemesis(int N) {
//	if (N <= 0)
//		return;
//	cout << "*";
//	nemesis(N - 1);
//}
//3
//int SumRange(int num1, int num2) {
//	if (num1 == num2);
//	return num1;
//
//	return num1 + SumRange(num1 + 1, num2);
//}
//4
int mass10(int arr[], int start, int count) {
	if (count == 0)
		return 0;

	return arr[start] + mass10(arr, start + 1, count - 1);
}

void FindMass(int arr[], int index, int minMass, int pos) {
	if (index > 90)
		return;
	int currMass = mass10(arr, index, 10);
	if (currMass < minMass) {
		minMass = currMass;
		pos = index;
	}
	FindMass(arr, index + 1, minMass, pos);
}


int main()
{
	//Task 1 - Write a recursive function to find the power of a number. The number and the exponent are entered by the user.
	/*int number, degree;
	cout << "Put Number: ";
	cin >> number;
	cout << "Put degree: ";
	cin >> degree;

	cout << "Result: " << rec(number, degree);
	cout << '\n';*/
	//Task 2 - Write a recursive function that prints N stars in a row, where the number N is specified by the user. Illustrate the function's work with an example. 
	/*int N;
	cout << "Put how many stars\n";
	cin >> N;

	cout << "Result: ";
	nemesis(N);
	cout << '\n';*/
	//Task 3 - Write a recursive function that calculates the sum of all numbers in the range from a to b. The user enters a and b. Illustrate the function's work with an example.
	/*int num1, num2;
	cout << "Put first num - num1: ";
	cin >> num1;
	cout << "Put second num - num2: ";
	cin >> num2;

	cout << "Sum of nums from " << num1 << " to " << num2 << " = " << SumRange(num1,num2);
	cout << '\n';*/
	//Task 4 - Write a recursive function that takes a one-dimensional array of 100 integers, randomly filled, and finds the position where a sequence of 10 numbers with the minimum sum begins.

	srand(time(NULL));
	int arr[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100;
	}
	
	cout << "Massive: ";
	for (int i = 0; i < 100; i++) {
		cout << arr[i] << ' ';
	}

	int minMass = mass10(arr, 0, 10);
	int pos = 0;
	FindMass(arr, 0, minMass, pos);

	cout << "Start Pos: ";
}
