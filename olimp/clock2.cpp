#include <iostream>
#include <string>
using namespace std;

int main() {
	int h, m, s;
	string s_s, m_s;
	cin >> s;
	while (s > 59) {
		s -= 60;
		m++;
	}
	while (m > 59) {
		m -= 60;
		h++;
	}
	while (h > 23) {
		h -= 24;
	}
	if (s < 10) {
		s_s = "0" + to_string(s);
	}
	else {
		s_s = to_string(s);
	}
	if (m < 10) {
		m_s = "0" + to_string(m);
	}
	else {
		m_s = to_string(m);
	}
	cout << h << ":" << m_s << ":" << s_s;

	return 0;
}