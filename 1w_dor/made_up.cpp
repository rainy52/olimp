#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    int a[n], b[n], c[n];

    for (int t = 0; t<n; t++) {
        cin >> a[t];
    }
    for (int y = 0; y<n; y++) {
        cin >> b[y];
    }
    for (int u = 0; u<n; u++) {
        cin >> c[u];
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (a[i] == b[c[j]-1]) {
                k++;
            }
        }
    }
    cout << k;
}
