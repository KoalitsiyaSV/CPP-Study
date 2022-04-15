#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute;

	Time(int h = 0, int m = 0) {
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