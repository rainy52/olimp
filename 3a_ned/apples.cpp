#include <iostream>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    if ((y * (n/3) + x * (n%3)) <= (x*n)) {
        cout << y * (n/3) + x * (n%3);
    }
    else {
        cout << x*n;
    }
}
