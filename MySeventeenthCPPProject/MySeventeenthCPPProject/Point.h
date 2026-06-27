#pragma once

struct Point {
	double x;
	double y;
};

void InputPoint(Point& p);
void PrintPoint(const Point& p);
double CalcDistance(const Point& p1, const Point& p2);
Point FindMidPoint(const Point& p1, const Point& p2);