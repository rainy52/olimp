#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int inp, mins, h;
    cin >> inp;
    mins = inp + 1260;
    h = mins/60;
    if (h > 23) {
        h %= 24;
    }
    cout << setw(2) << setfill('0') << h;
    cout << ":";
    cout << setw(2) << setfill('0') << (mins - 60*h)%60;
}
