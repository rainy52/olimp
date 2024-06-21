#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 0, star;
    string s;
    bool first_f = false;

    cin >> n >> s;
    for (int i = 0; i<n; i++) {

        if (s[i] == '|' && !first_f) {
            first = i;
            first_f = true;
        }
        else if (s[i] == '|' && first_f) {
            second = i;
        }
        else if (s[i] == '*') {
            star = i;
        }
    }

    if (first < star && star < second) {
        cout << "in";
    }
    else {
        cout << "out";
    }
}
