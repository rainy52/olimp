#include <iostream>
using namespace std;

int main() {
    int n, k, taro = 0, t = 0;
    cin >> n >> k;
    int a[n], b[n];

    for (int i = 0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    while (k > 0) {
        if (k >= a[t]) {
            k = k - (a[t] - taro) + b[t];
            taro = a[t];
            t++;
            cout << k;
        }
        else {
            break;
        }
    }
    cout << t;
}
