#include <iostream>
using namespace std;



int main() {
    long int p;
    cin >> p;
    int maximum = 1, k = 0;
    for (int i=10; i>0; i--) {
        cout << p << " " << fact(i) << endl;
        if (p <= fact(i)) {
            p -= fact(i);
            k++;
        }
    }
    cout << k;


}
