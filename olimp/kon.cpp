#include <iostream>
using namespace std;

int main() {
	int xa, ya, xb, yb;
	cin >> xa >> ya >> xb >> yb;
	if ((((ya - yb == 1) || (ya - yb == -1)) && ((xa - xb == 2) || (xa - xb == -2))) || (((xa - xb == 1) || (xa - xb == -1)) && ((ya - yb == 2) || (ya - yb == -2)))) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}