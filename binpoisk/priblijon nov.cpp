#include <iostream>
using namespace std;
using ll = long long;

const int N = 100001;
int n, k;
ll mass[N], invent[N];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> mass[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> invent[i];
    }

    for (int i = 0; i < k; ++i) {
        int x = invent[i];
        int l = 0, r = n;
        ll m = 0;
        while (l + 1 < r) {
            m = (l+r)/2;
            if (x < mass[m]) {
                r = m;
            }
            else {
                l = m;
            }
        }

        if (x == mass[l] || abs(x - mass[l]) <= abs(mass[r] - x)) {
            cout << mass[l] << "\n";
        }
        else {
            cout << mass[r] << "\n";
        }
    }
}
