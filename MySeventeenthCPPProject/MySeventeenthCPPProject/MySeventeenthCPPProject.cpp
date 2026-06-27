#include <iostream>
#include "Point.h"

//#define PI 3.14
//#define SQR(X) ((X) * (X))

//#undef PI

//#define FOREVER while(true)
//#define BEGIN {
//#define END }
//#define ENDLINE ;
//
//#pragma warning(disable:4996)



int main()
{
	Point p1, p2;
	
	std::cout << "Enter First Point: ";
	InputPoint(p1);

	std::cout << "Enter Second Point: ";
	InputPoint(p2);

	std::cout << "Point 1: ";
	PrintPoint(p1);
	std::cout << '\n';
	std::cout << "Point 2: ";
	PrintPoint(p2);
	std::cout << '\n';

	double distance = CalcDistance(p1, p2);
	std::cout << "Distance: " << distance << '\n';

	Point midpoint = FindMidPoint(p1, p2);
	std::cout << "Midpoint: ";
	PrintPoint(midpoint);
	std::cout << '\n';


//#pragma region Encoding
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//#pragma endregion
//
//    char* dest = new char[10];
//    char source[] = "123456789";
//
//
//    strcpy(dest, source);
//
//    delete[] dest;
//
//    char str[] = "dota 2 beastmaster the best hero than fcking who has no counter pick bla bla bla bla bla blas blablablbalbalbalablablablab"\
//        "sadasdsadaskdaskdjasjdjawjdajdwajdkjadjwadklajwdkaw";
//
//
//#if __cplusplus < 20202L
//#error "Потрібна версія 20 або вище"
//#endif
//
//    cout << str << '\n';
//
//    /*FOREVER BEGIN
//        cout << "011001010101010010" ENDLINE
//        END*/
//
//#ifdef SQR
//    cout << SQR(10) << '\n';
//#endif 
//
//    cout << 10 * 10 << '\n';
//
//    cout << PI << '\n';
//    cout << 3.14 << '\n';
}