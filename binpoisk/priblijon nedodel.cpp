#include <iostream>
using namespace std;

int search(int x, int mass[], int n) {
    int l = 0;
    int r = n - 1;
    while (l + 1 < r) {
        int m = (l+r)/2;
        if (mass[m] < x) {
            l = m;
            //cout << endl << l << " " << r;
        }
        else {
            r = m;
            //cout << endl << l << " " << r;
        }
    }
    if (abs(mass[l]-x) < abs(mass[r]-x)) {
        return mass[l];
    }
    else if (abs(mass[l]-x) > abs(mass[r]-x)) {
        return mass[r];
    }
    else {
        return x;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int f[n], s[k];
    for (int a = 0; a<n; a++) {
        cin >> f[a];
    }
    for (int b = 0; b<k; b++) {
        cin >> s[b];
    }

    for (int i = 0; i<k; i++) {

        cout << endl << search(s[i], f, n) << " ";
    }
}
