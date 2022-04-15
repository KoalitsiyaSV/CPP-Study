#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute;

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
	a.print();

	return 0;
}