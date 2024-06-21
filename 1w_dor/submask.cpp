#include <iostream>
using namespace std;

int main() {
    int x, n, b;
    cin >> n;
    int m[5870];
    b = 0;
    x = n;
    while (x > 0) {
        m[b] = x;
        x = (x-1) & n;
    }

    for (int i=0; i<n; i++) {
        cout << m[i] << endl;
    }
}
