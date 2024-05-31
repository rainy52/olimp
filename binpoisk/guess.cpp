#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mass[n];
    for (int i = 0; i<n; i++) {
        mass[i] = i + 1;
    }
    int l = 0, r = n - 1, k = 0;
    while (l + 1 < r) {
        int m = (l+r)/2;
        if (mass[m] < n) {
            l = m;
        }
        else {
            r = m;
        }
        k++;
    }
    cout << k+1;
    return 0;
}
