#include <iostream>
using namespace std;

int main() {
	int k, m, n, t;
	cin >> k >> m >> n;
	while (n > 0) {
		if (n >= k) {
			n -= k;
			t = k * 2*m;
		}
		else {
			t = n * 2*m;
			n = 0;
		}
	}
	cout << t;

	return 0;
}