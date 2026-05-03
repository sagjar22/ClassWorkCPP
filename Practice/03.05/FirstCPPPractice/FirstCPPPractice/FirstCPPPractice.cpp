#include <iostream>
#include <Windows.h>

using namespace std;

//1
//int main()
//{
//    int num;
//    cout << "Enter number: ";
//    cin >> num;
//
//    for (int i = 0; i < num; i++) {
//        cout << i << ' ';
//    }
//}
//2
//int main() 
//{
//	int num1, num2;
//	cout << "Enter two numbers: ";
//	cin >> num1 >> num2;
//
//	if (num1 > num2) {
//		swap(num1, num2);
//	}
//
//	cout << "All nums: \n";
//	for (int i = num1; i < num2; i++) {
//		cout << i << ' ';
//	}
//
//
//	cout << "Even nums: \n";
//	for (int i = num1; i < num2; i++) {
//		if (i % 2 == 0) {
//			cout << i << ' ';
//		}
//	}
//
//	cout << "Odd nums: \n";
//	for (int i = num1; i < num2; i++) {
//		if (i % 2 != 0) {
//			cout << i << ' ';
//		}
//	}
//
//
//	cout << "Nums div by 7: \n";
//	for (int i = num1; i < num2; i++) {
//		if (i % 7 == 0) {
//			cout << i << ' ';
//		}
//	}
//}
//3
//int main()
//{
//	int min , max;
//	int sum = 0;
//
//	cout << "Enter two numbers: ";
//	cin >> min >> max;
//
//
//	if (min > max) {
//		swap(min, max);
//	}
//	
//	for (int i = min; i < max; i++) {
//		sum += i;
//	}
//	cout << "Sum = " << sum;
//}
//4
//int main()
//{
//	int num;
//	int sum = 0;
//
//	do {
//		cout << "Enter number, 0 for stop: ";
//		cin >> num;
//
//		sum += num;
//	} while (num != 0);
//	cout << "Sum = " << sum;
//}
//5
//int main()
//{
//	srand(time(NULL));
//	
//	int random = rand() % 500 - 1;
//	int guess;
//	int tries = 0;
//
//	cout << "THE BEESTMASTER GAMBLING GAME!\n";
//	cout << "Guess number form 1 too 500 (0 to exit gambling game)\n";
//
//	do {
//		cout << "You guess: ";
//		cin >> guess;
//
//		if (guess == 0) {
//			cout << "Game over! Good Luck!\n"; break;
//		}
//
//		tries++;
//		
//		if (guess > random) {
//			cout << "Too big!\n";
//		}
//		else if (guess < random) {
//			cout << "Too small!\n";
//		}
//		else {
//			cout << "You win YAY!\n";
//			cout << "Tries: " << tries;
//		}
//	} while (guess != random);
//
//}