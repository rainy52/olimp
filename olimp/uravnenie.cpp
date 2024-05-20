#include <iostream>
using namespace std;

int main() {
	int a, b, xi;
	float x;
	cin >> a >> b;
	if (a == 0) {
		cout << "INF";
	}
	else {
		x = -(float(b)) / float(a);
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