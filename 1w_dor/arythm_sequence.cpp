#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x - y == y - z || x - z == z - y || y - x == x - z || y - z == z - x || z - x == x - y || z - y == y - x) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
