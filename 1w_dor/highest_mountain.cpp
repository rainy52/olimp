#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string name[n];
    int h_old[n], h_sort[n];
    for (int a = 0; a<n; a++) {
        cin >> name[a] >> h_old[a];
        h_sort[a] = h_old[a];
    }
    sort(h_sort, h_sort + n);
    for (int i = 0; i<n; i++) {
        if (h_old[i] == h_sort[n-2]) {
            cout << name[i];
            break;
        }
    }

}
