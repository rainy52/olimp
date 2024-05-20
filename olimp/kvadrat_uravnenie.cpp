#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = b*b - 4*a*c;
	if (d > 0) {
		d = sqrt(d);
		x1 = (-b+d)/(2*a);
		x2 = (-b-d)/(2*a);
		if (x1 == 0) {
			x1 = abs(x1);
		}
		if (x2 == 0) {
			x2 = abs(x2);
		}
		cout << x1 << endl << x2;
	}
	else if (d == 0) {
		x1 = (-b) / (2*a);
		if (x1 == 0) {
			x1 = abs(x1);
		}
		cout << x1;
	}

	return 0;
}