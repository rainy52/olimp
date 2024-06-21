#include <iostream>
using namespace std;

int main() {
    int n, k, inp;
    int prefix[200001];
    prefix[0] = 0;

    cin >> n >> k >> prefix[1];
    for (int i=1; i<n; i++) {
        cin >> inp;
        prefix[i] = prefix[i-1] + inp;
    }

    // ???
}
