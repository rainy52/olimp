#include <iostream>
using namespace std;

int main() {
	int n, k;
	string nstr;
	cin >> n >> k;
	for (int i=0; i<k; i++) {
		if (n%200==0) {
			n /= 200;
		}
		else {
			nstr = to_string(n);
			nstr += "200";
			n = stoi(nstr);
		}
	}
	cout << n;
	return 0;
}