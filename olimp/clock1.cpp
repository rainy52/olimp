#include <iostream>
using namespace std;

int main() {
	int n, h;
	cin >> n;
	while (n > 59) {
		n -= 60;
		h++;
	}
	while (h > 23) {
		h -= 24;
	}
	cout << h << " " << n;

	return 0;
}