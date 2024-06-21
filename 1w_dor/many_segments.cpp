#include <iostream>
using namespace std;

int main() {
    int n, t, l, r;
    cin >> n;
    int m[n*2]; // l r l r ...

    for (int i = 0; i<n; i+=2) {
        cin >> t >> l >> r;
        if (t == 1) {
            m[i] = l;
            m[i+1] = r;
        }
        else if (t == 2) {
            m[i] = l;
            m[i+1] = r - 1;
        }
        else if (t == 3) {
            m[i] = l + 1;
            m[i+1] = r;
        }
        else if (t == 4) {
            m[i] = l + 1;
            m[i+1] = r - 1;
        }
    }

    for (int j = 0; j<n; j++) {
        // удалить элементы по значениям m[j] и m[j+1], если есть, и подсчитать число удаленных
    }
}
