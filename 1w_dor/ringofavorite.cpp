#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    int mass[n];
    for (int a = 0; a<n; a++) {
        cin >> mass[a];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((mass[i] - mass[j] % 200)%200 == 0) {
                k++;
            }
        }
    }
    cout << k;
}
