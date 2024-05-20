#include <iostream>
using namespace std;

int main() {
	int mass[3];
	for (int i=0; i<3; i++) {
		cin >> mass[i];
	}
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
	    	if (mass[j] > mass[j + 1]) {
	        	int b = mass[j];
	        	mass[j] = mass[j + 1];
	        	mass[j + 1] = b;
	        }
        }
    }
    cout << mass[0] << " " << mass[1] << " " << mass[2];

	return 0;
}