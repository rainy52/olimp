#include <iostream>
using namespace std;

int main() {
    int cards[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, inp, times[5] = {0, 0, 0, 0, 0};
    bool togg;
    for (int i = 0; i<10; i+=2) {
        togg = true;
        cin >> inp;
        if (i == 0) {
            cards[0] = inp;
            cards[1] = 1;
        }
        else {
            for (int a = 0; a<i; i+=2) {
                if (cards[a] == inp) {
                    cards[a+1]++;
                    togg = false;
                    break;
                }
            }
            if (togg) {
                cards[i] = inp;
                cards[i+1] = 1;
            }
        }
    }

    int kx = 0;
    for (int c = 1; c<10; c+=2) {
        times[kx] = c;
        kx++;
    }

    if (count(times.begin(), times.end(), 3) == 1 && count(times.begin(), times.end(), 2) == 1) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

}
