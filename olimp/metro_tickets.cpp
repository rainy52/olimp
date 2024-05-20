#include <iostream>
using namespace std;

int main() {
	// 1 поездка = 15 руб, 1 = 15.0
	// 10 поездок = 125 руб, 1 = 12.5
	// 60 поездок = 440 руб, 1 = 7.3

	int n, tens = 0, sixtys = 0;
	cin >> n;

	while (n > 60) {
		n -= 60;
		sixtys++;
	}
	while (n > 8) {
		n -= 10;
		tens++;
	}
	if (n < 0) {
		n = 0;
	}
	cout << n << " " << tens << " " << sixtys;

	return 0;
}