#include <iostream>
using namespace std;

int main() {
    int a, b, n, s_r, s_k;
    cin >> a >> b >> n;

    s_r = a * n;
    s_k = b * n;

    while (s_k > 99) {
        s_k -= 100;
        s_r++;
    }

    cout << s_r << " " << s_k;
}
