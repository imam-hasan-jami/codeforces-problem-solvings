//69A - Young Physicist

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x, y, z, sumX = 0, sumY = 0, sumZ = 0;

    while(t--) {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }

    return 0;
}