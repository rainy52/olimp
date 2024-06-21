#include <iostream>
using namespace std;

int main() {
    int n;
    string lt;
    bool eng = false;
    cin >> n;
    for (int i = 0; i<n; i++) {
        cin >> lt;
        if (lt == "and" || lt == "not" || lt == "that" || lt == "the" || lt == "you") {
            eng = true;
        }
    }

    if (eng) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
