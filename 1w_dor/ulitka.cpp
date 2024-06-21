#include <iostream>
using namespace std;

int main() {
    int a, b, h, t;
    cin >> h >> a >> b;

    cout << (h - 2 * b + a - 1) / (a - b);
}
