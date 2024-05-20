#include <iostream>
using namespace std;

int main() {
	int xa, ya, xb, yb, r_x, r_y;
	cin >> xa >> ya >> xb >> yb;
	r_x = abs(xa-xb);
	r_y = abs(ya-yb);
	if ((ya == yb) || (xa == xb) || (r_x == r_y)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}