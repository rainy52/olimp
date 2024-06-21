#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double c;

int main() {
    cin >> c;

    double l = 0, r = c, m;

    for (int i = 0; i < 1000000; ++i) {
        m = (l+r)/2;
        if (m * m + sqrt(m) < c) {
            l = m;
        }
        else {
            r = m;
        }
    }

    cout << fixed << setprecision(6) << r;
}
