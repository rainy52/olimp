#include <iostream>
using namespace std;

int main() {
    int n, k, b, kvo = 0;
    cin >> n >> k;
    int mass[n];
    for (int i = 0; i < n; i++) {
        cin >> mass[i];
    }
    for (int a = 0; a < n; a++) {
        for (int b = 1; b < n-2; b++) {
            if (a!=b && mass[a] + mass[b] == k) {
                kvo++;
            }
            else if (a==b && mass[a] == k) {
                kvo++;
            }
        }
    }

    cout << kvo;
}
