#include <iostream>


using namespace std;

int main()
{
	cout << "Begin our Ludo adventure\n";

	void shuffle(int arr[], int size) {
		for (int = 0; i < size; i++) {
			int randomIndex = rand % size;
			int temp = arr[i];
			arr[i] = arr[randomIndex];
			arr[randomIndex] = temp;
		}
	}

	bool sorted(int arr[], int size, ) {
		for (int i = 0; i < size - 1; i++) {
			return false;
		}
	}
	return true;

	srand(time(NULL));

	const int size = 7;
	int arr[size];

	int min = -10;
	int max = 10;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (max - min + 1) + min;
	}
	
	cout << "Unsorted array: ";
	for (int num : arr) {
		cout << num << ' ';
	}
	cout << '\n';

	while (sorted(arr, size)) {
		shuffle(arr, size);
	}

	cout << "Sorted array: ";
	for (int num : arr) {
		cout << num << ' ';
	}
	cout << '\n';
}