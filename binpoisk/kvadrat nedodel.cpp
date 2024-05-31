#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double c;
    cin >> c;
    double l = 0, r = c;
    while (l*l + sqrt(l) != c || r*r + sqrt(r) != c) {
        double x = (l+r)/2.0;
        cout << x*x + sqrt(x) << endl;
        if (x*x + sqrt(x) < c) {
            r = x;
        }
        else if (x*x + sqrt(x) > c) {
            l = x;
        }
        cout << l << " " << r << endl;
    }
    if (r == c) {
        cout << r;
    }
    else if (l == c) {
        cout << l;
    }
}
