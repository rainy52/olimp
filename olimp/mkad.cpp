#include <iostream>
using namespace std;

int main() {
    int v, t, s;
    cin >> v; cin >> t;
    s = v*t;
    if (s >= 0) {
        while (s > 108) {
            s -= 109;
        }
    }
    else {
        while (s < -108) {
            s += 109;
        }
        s += 109;
    }
    cout << s;
    return 0;
}