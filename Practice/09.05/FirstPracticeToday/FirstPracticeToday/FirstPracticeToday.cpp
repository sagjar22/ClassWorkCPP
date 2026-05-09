#include <iostream>
#include <Windows.h>


using namespace std;
//1
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	
//	const int mon = 12;
//	int profit[mon] = { 1200 , 2000 , 4000 , 6000 , 7000, 1000 , 4000 , 5000, 6000, 1000, 3000,10000};
//	int sum = 0;
//	int maxProfit = profit[0];
//	int minProfit = profit[0];
//	int maxMonth = 0;
//	int minMonth = 0;
//	int average = 0;
//
//	for (int i = 0; i < mon; i++) {
//		sum += profit[i];
//		
//
//		if (profit[i] > maxProfit) {
//			maxProfit = profit[i];
//			maxMonth = i;
//		}
//		if (profit[i] < minProfit) {
//			minProfit = profit[i];
//			minProfit = i;
//		}
//
//		average = sum / mon;
//
//		cout << "All profit per month: " << sum << '\n';
//		
//		for (auto money : profit) {
//			cout << money << '\n';
//		}
//
//		cout << "All profit per year: " << sum << '\n';
//		cout << "Max profit: " << maxProfit << maxMonth + 1 << '\n';
//		cout << "Min profit: " << minProfit << minMonth + 1 << '\n';
//		cout << "Average profit: " << average << '\n';
//	}
//}
//2
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	const int size = 10;
//	int numbers[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "Put in element" << i + 1 << ": ";
//		cin >> numbers[i];
//	}
//	cout << "Massive rotate: \n";
//
//}
//3
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 5;
	int len[size] = { };
	int nums = 0;
	

	for (int i = 0; i < size; i++) {
		cout << "Put in len every side" << i + 1 << ": ";
		cin >> nums;
	}


}