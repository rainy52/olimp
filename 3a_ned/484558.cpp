#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int inp;
    cin >> inp;
    cout << std::uppercase << setfill('0') << setw(2) << std::hex << inp;
}
