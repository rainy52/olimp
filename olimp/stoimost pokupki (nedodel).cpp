#include <iostream>
using namespace std;

int main() {
	float a, b, n, rub;
	cin >> a >> b >> n;
	rub = a + (b / 100);
	int sv = rub * n;
	float hh = (rub*n) - sv;
	int sn = hh * 100;
	cout << sv << " " << sn;
	return 0;
}