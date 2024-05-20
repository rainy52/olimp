#include <iostream>
using namespace std;

int main() {
	int h, a, b, l = 0, d = 0;
	cin >> h >> a >> b;
	while (l < h) {
		l = l + a - b;
		d++;
	}
	cout << d;
	return 0;
}