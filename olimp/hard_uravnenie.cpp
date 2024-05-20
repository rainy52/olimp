#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, xi;
	float x, xnot;
	cin >> a >> b >> c >> d;

	x = -(float(b)) / float(a);
	xnot = -(float(d)) / float(c);
	if (x == xnot) {
		cout << "NO";
	}
	else {
		xi = -b / a;
		if (x == float(xi)) {
			cout << xi;
		}
		else {
			cout << "NO";
		}
	}

	return 0;
}