#include <iostream>
using namespace std;

int main() {
    // x - номер дня рождения, d - разница роста между каждым годом, между x и n - рост не менялся
    // t - заведомо известный рост в др x, m - возраст по которому ищем рост

    int n, m, x, t, d, f_height;
    cin >> n >> m >> x >> t >> d;

    f_height = t - d*(x-1);

    if (m > x && m < n) {
        cout << t;
    }
    else if (0 <= m && m <= x) {
        cout << f_height + d*(m-1);
    }
}
