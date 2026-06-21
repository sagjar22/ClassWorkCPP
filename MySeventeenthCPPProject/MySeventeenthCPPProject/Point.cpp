#include "Point.h"
#include <iostream>
#include <cmath>

void InputPoint(Point& p) {
	std::cout << "Put X coord: ";
	std::cin >> p.x;
	std::cout << "Put Y coord: ";
	std::cin >> p.y;
}

void PrintPoint(Point& p) {
	std::cout << "(" << p.x << ", " << p.y << ")"; 
}

double CalcDistance(const Point& p1, const Point& p2) {
	return std::sqrt(std::pow(p2.x - p1.x, 2) * std::pow(p2.y - p1.y, 2));
}

Point FindMidPoint(const Point& p1, const Point& p2) {
	return {
		(p1.x + p2.x) / 2 ,
		(p1.y + p2.y) / 2
	};
}