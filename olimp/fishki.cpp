#include <iostream>
using namespace std;

int main() {
	float a, k;
	cin >> k;
	a = (k/4) + 1;
	int ia = (k/4) + 1;
	if (a == float(ia)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}