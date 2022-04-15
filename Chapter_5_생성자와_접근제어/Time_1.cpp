#include <iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;

	void print() {
		cout << hour << ":" << minute << endl;
	}
};

void init(Time& obj, int h, int m) {
		obj.hour = h;
		obj.minute = m;
	}

int main() {
	Time a;

	init(a,10,25);
	a.print();

	Time b;
	b.print();

	return 0;
}