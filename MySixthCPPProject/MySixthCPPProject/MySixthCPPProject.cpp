#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	//O(1) - Константний час/пам'ять
	//O(n) - Лінічний час/пам'ять 
	//O(log n) - Логарифмічний час/пам'ять
	//O(n^2) - Квадратичний час/пам'ять
	//O(n log n) - Лінійно-логарифмічний час/пам'ять
	//O(2^n) or O(n!) - Експоненційний та Факторіальний час/пам'ять
	//Колекції та Алгортми - Будь які  алгоритми пацюють з даними. Часто ці дані зберігаются в спеціальних структурах - колекціях. Приклад колекції (структури даних) - масиви. При виконанні колекції існує дві розпосвюдженні задачі: Сортування колекції , Пошук елементу колекції.
	//Алгоритми сортування - алгоритми, що дозволяють розмістити елементи в колекції в певному 
	// Сортування вибором (Select sort) - Алгоритм сортування вибору заключається в пошуку найменшого елементу в 
	// Бульбашкове сортування (Buble Sort) - порівнює сусідні елементи та міняє між місцями, якщо вони в неправильному порядку. Повторюется, покимасив не стане відсортованим. 1. пРОХОДИТЬ ПО МАСИВУ зліва направо 

	srand(time(NULL));
	const int size = 7;
	int arr[size];

	int min = -10;
	int max = 10;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (max - min + 1) + min;
	}

	cout << "Unsorted array: ";
	for(int num : arr) {
		cout << num << ' ';
	}

	cout << '\n';
	
	int searchNumber;
	cout << "Enter number: ";
	cin >> searchNumber;

	int searchIndex = -1;


	for (int i = 1; i < size; i++) {
		int temp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] == arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	//Binary search 
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == searchNumber) {
			searchIndex = mid;
			break;
		}
		else if (arr[mid] < searchNumber) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}


	// Linear search
	/*int searchNumber;
	cout << "Enter number: ";
	cin >> searchNumber;

	int searchIndex = -1;

	for (int i = 0; i < size; i++) {
		if (arr[i] == searchNumber) {
			searchIndex = i;
			break;
		}
	}
	if (searchIndex == -1) cout << "Number not found HAHA!\n";
	else cout << "Number found. Index: " << searchIndex << '\n';*/

	//Selected Sort
	/*int minIndex;
	for (int i = 0; i < size; i++) {
		minIndex = i;
		for (int j = i; j < size; j++) {
			if (arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}*/

	//Buble Sort
	/*for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}*/

	//Insertion Sort 
	/*for (int i = 1; i < size; i++) {
		int temp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] == arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}*/

	/*cout << "Sorted array: "; 
	for (int num : arr) {
		cout << num << ' ';
	}*/





}
