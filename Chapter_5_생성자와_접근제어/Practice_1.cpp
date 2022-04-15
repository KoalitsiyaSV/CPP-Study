#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point() {
		delete& x;
		delete& y;
	}
};