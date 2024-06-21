#include <iostream>
using namespace std;

int main() {
    int h, w, k = 0;
    string s;
    cin >> h >> w;
    for (int i = 0; i<h; i++) {
        cin >> s;
        for (int j = 0; j<w; j++) {
            if (s[j] == '#') {
                k++;
            }
        }
    }
    cout << k;
}
