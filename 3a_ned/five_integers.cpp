#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k = 0, inp;
    vector<int> ints;

    for (int i=0; i<5; i++) {
        bool togg = true;
        cin >> inp;
        for (int a : ints) {
            if (inp == a) {
                togg = false;
            }
        }
        ints.push_back(inp);

        if (togg) {
            k++;
        }
    }
    cout << k;
}
