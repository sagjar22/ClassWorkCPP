#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	const int rows = 2;
	const int cols = 3;

	int matrix[rows][cols] = {
		{ 2, 4, 7 },
		{ 4, 8, -5 }
	};

	cout << matrix[0][2] << '\n';
	cout << matrix[1][1] << '\n';

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}

	const int sizeX = 3;
	const int sizeY = 2;
	const int sizeZ = 3;

	int arr3d[sizeX][sizeY][sizeZ] = {
		{
			{2,4,5},
			{0,4,90}
		},
		{
			{-5,0,8},
			{12,54,-100}
		},
		{
			{8,7,5},
			{90,-90,9}
		}
	};

	for (int x = 0; x < sizeX; x++) {
		cout << x + 1 << "\n";
		for (int y = 0; y < sizeY; y++) {
			for (int z = 0; z < sizeZ; z++) {
				cout << arr3d[x][y][z] << ' ';
			}
			cout << '\n';
		}
	}


	const int size1 = 2;
	const int size2 = 3;
	const int size3 = 2;
	const int size4 = 2;

	int arr4d[size1][size2][size3][size4] = {
	{
		{
			{10, 12},
			{-2, 5}
		},
		{
			{3, 1},
			{-2, 8}
		},
		{
			{15, 21},
			{-2, 56}
		}
	},
	{
		{
			{10, 12},
			{-2, 5}
		},
		{
			{3, 1},
			{-2, 8}
		},
		{
			{15, 21},
			{-2, 56}
		}
	}
	};
}