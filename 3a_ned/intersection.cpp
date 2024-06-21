#include <iostream>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if ((l2 < l1 && r2 < l1) || (r1 < l2 && r1 < r2)) {
        cout << 0;
    }
    else if (l2 < l1 && r2 >= l1) {
        cout << abs(r2-l1);
    }
    else if (l1 <= l2 && r2 <= r1) {
        cout << abs(r2-l2);
    }
    else if (l2 >= l1 && r2 > r1) {
        cout << abs(r1-l2);
    }

}
