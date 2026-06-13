#include <iostream>

using namespace std;

//1 
void AddRow(int**& arr, int& rows, int cols, int* addrow) {
	int** temp = new int* [rows + 1];
	for (int i = 0; i < rows; i++)
		temp[i] = arr[i];

	temp[rows] = new int[cols];

	for (int j = 0; j < cols; j++)
		temp[rows][j] = addrow[j];

	delete[] arr;

	arr = temp;
	rows++;
}

void PrintArr(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << arr[i][j] << ' ';
	}
	cout << '\n';
}
//2
void AddRowBegin(int**& arr, int& rows, int cols, int* addrow) {
	int** temp = new int* [rows + 1];

	temp[0] = new int[cols];
	
	for (int j = 0; j < cols; j++)
		temp[rows][j] = addrow[j];

	for (int i = 0; i < rows; i++)
		temp[i] = arr[i];

	delete[] arr;

	arr = temp;
	rows++;
}
//3 
void AddRowPosition(int**& arr, int& rows, int cols, int* addrow , int pos) {
	int** temp = new int* [rows + 1];
	for (int i = 0; i < pos; i++)
		temp[i] = arr[i];

	temp[pos] = new int[cols];

	for (int j = 0; j < cols; j++)
		temp[pos][j] = addrow[j];

	for (int i = pos; i < rows; i++)
		temp[i + 1] = arr[i];

	delete[] arr;

	arr = temp;
	rows++;
}
//4
void RemoveRowsZero(int**& arr, int& rows, int cols) {
	int count = 0;

	for (int i = 0; i < rows; i++)
	{
		bool HasZero = false;
		
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == 0) {
				HasZero = true;
				break;
			}
		}
		if (HasZero)
			count++;
	}
	int** temp = new int* [count];
	int q = 0;
	
	for (int i = 0; i < rows; i++) {
		bool HasZero = false;
		
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == 0) {
				HasZero = true;
				break;
			}
		}
		if (HasZero) {
			temp[q] = arr[i];
			q++;
		}
		else
		{
			delete[] arr[i];
		}
	}
	delete[] arr;

	arr = temp;
	rows = count;
}
//5


int main()
{
//Task 1 - Write a function that adds a row to the end of a two-dimensional array.
		//int rows = 4;
		//int cols = 3;

		//int** arr = new int* [rows];
		//
		//for (int i = 0; i < rows; i++)
		//	arr[i] = new int[cols];

		//arr[0][0] = 1;
		//arr[0][1] = 2;
		//arr[0][2] = 3;

		//arr[1][0] = 4;
		//arr[1][1] = 5;
		//arr[1][2] = 6;

		//cout << "<================>\n";

		//PrintArr(arr, rows, cols);

		//int addrow[] = { 7,8,9 };

		//AddRow(arr, rows, cols, addrow);

		//cout << "<===============>\n";

		//PrintArr(arr, rows, cols);

		//for (int i = 0; i < rows; i++)
		//	delete[] arr[i];
		//
		//delete[] arr;
//Task 2 - Write a function that adds a row to the beginning of a two-dimensional array
		//int rows = 4;
		//int cols = 3;

		//int** arr = new int* [rows];
		//
		//for (int i = 0; i < rows; i++)
		//	arr[i] = new int[cols];

		//arr[0][0] = 1;
		//arr[0][1] = 2;
		//arr[0][2] = 3;

		//arr[1][0] = 4;
		//arr[1][1] = 5;
		//arr[1][2] = 6;

		//cout << "<================>\n";

		//PrintArr(arr, rows, cols);

		//int addrow[] = { 7,8,9 };

		//AddRowBegin(arr, rows, cols, addrow);

		//cout << "<===============>\n";

		//PrintArr(arr, rows, cols);

		//for (int i = 0; i < rows; i++)
		//	delete[] arr[i];
		//
		//delete[] arr;
//Task 3 - Write a function that adds a row to a two-dimensional array at a specified position.
	    //int rows = 4;
		//int cols = 3;

		//int** arr = new int* [rows];
		//
		//for (int i = 0; i < rows; i++)
		//	arr[i] = new int[cols];

		//arr[0][0] = 1;
		//arr[0][1] = 2;
		//arr[0][2] = 3;

		//arr[1][0] = 4;
		//arr[1][1] = 5;
		//arr[1][2] = 6;

		//cout << "<================>\n";

		//PrintArr(arr, rows, cols);

		//int addrow[] = { 7,8,9 };
		//int pos = 1;

		//AddRowPosition(arr, rows, cols, addrow,pos);

		//cout << "<===============>\n";

		//PrintArr(arr, rows, cols);

		//for (int i = 0; i < rows; i++)
		//	delete[] arr[i];
		//
		//delete[] arr;
//Task 4 - Write a program that removes rows containing zero elements from a two-dimensional array filled with random numbers.
		int rows = 4;
		int cols = 3;

		int** arr = new int* [rows];
		
		for (int i = 0; i < rows; i++)
			arr[i] = new int[cols];

		arr[0][0] = 1;
		arr[0][1] = 2;
		arr[0][2] = 3;

		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;

		arr[2][0] = 7;
		arr[2][1] = 8;
		arr[2][2] = 9;

		arr[3][0] = 0;
		arr[3][1] = 11;
		arr[3][2] = 12;

		cout << "<================>\n";

		PrintArr(arr, rows, cols);

		RemoveRowsZero(arr, rows, cols);

		cout << "<===============>\n";

		PrintArr(arr, rows, cols);

		for (int i = 0; i < rows; i++)
			delete[] arr[i];
		
		delete[] arr;
//Task 5 - Write a program that sums two dynamic two-dimensional arrays filled with random numbers element by element and stores the result in a third array. The sizes of the output arrays are specified by the user.

}