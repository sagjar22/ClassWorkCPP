#include <iostream>

using namespace std;

void F00() {
	//empty function
}

double sum(double num1, double num2 = 10.0) {
	return num1 + num2;
}
double subtruct(double num1, double num2) {
	return num1 - num2;
}
double multiply(double num1, double num2) {
	return num1 * num2;
}
double divide(double num1, double num2) {
	return num1 / num2;
}

void calcAndPrint(double num1, double num2, double(*callback)(double, double)) {
	cout << callback(num1, num2) << '\n';
}

template<typename T1, typename T2>
//double(T1) * int(T2) = double(T1)
//int(T1) * double(T2) = double(T2)
auto multiply(T1 value1, T2 value2) {
	return value1 * value2;
}

int main()
{
	/*cout << F00 << '\n';
	cout << main << '\n';*/

	/*cout << sum(11.3) << '\n';

	double (*ptr) (double, double) = sum;

	cout << ptr(10.0, 1488.0) << '\n';*/

	/*cout << "<=======================>\n";

	double (*calc[])(double, double) = { sum,subtruct,multiply,divide };

	double num1, num2;

	cin >> num1 >> num2;

	cout << "<=======================>\n";

	for (int i = 0; i < 4; i++) {
		cout << calc[i](num1, num2) << '\n';
	}*/
	/*cout << "<=======================>\n";

	double (*calc[])(double, double) = { sum,subtruct,multiply,divide };

	double num1, num2;

	cin >> num1 >> num2;

	cout << "<=======================>\n";

	for (int i = 0; i < 4; i++) {
		calcAndPrint(num1, num2, calc[i]);
	}*/

	// auto decltype
	auto number = 10;
	auto number1 = 10 + 8.7;

	decltype(10 + 9.6) number2;
}