#include <iostream>
using namespace std;
using ll = long long;

const int N = 100001;
int k;
ll mass[N], x;

int main() {
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> mass[i];
    }

    cin >> x;
    int l = 0, r = k;
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

    if (x == mass[l]) {
        cout << l;
    }
    else if (x == mass[r]) {
        cout << r;
    }
    else {
        cout << "no";
    }
}
