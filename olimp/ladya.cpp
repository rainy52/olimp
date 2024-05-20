#include <iostream>
using namespace std;

int main() {
	int xa, ya, xb, yb;
	cin >> xa >> ya >> xb >> yb;
	if ((ya == yb) || (xa == xb)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}