#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute;

	Time() {
		hour = 0;
		minute = 0;
	}
	Time(int h, int m) {
		hour = h;
		minute = m;
	}

	void print() {
		cout << hour << " : " << minute << endl;
	}
};

int main() {
	Time a(10, 25);
	Time b;

	a.print();
	b.print();

	return 0;
}