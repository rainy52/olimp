#include <iostream>
using namespace std;

int main() {
	int h1, m1, s1, h2, m2, s2, sec1, sec2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	sec1 = h1 * 3600 + m1 * 60 + s1;
	sec2 = h2 * 3600 + m2 * 60 + s2;
	if (sec2 >= sec1) {
		cout << sec2 - sec1;
	}
	else {
		sec2 += 86400;
		cout << sec2 - sec1;
	}

	return 0;
}