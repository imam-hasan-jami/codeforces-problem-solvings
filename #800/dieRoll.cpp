//9A - Die Roll

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int maxx = max(y, w);
    int prob = 6 - maxx + 1;
    if (prob == 6) {
        cout << "1/1";
    } else if (prob == 6) {
        cout << "1/1";
    } else if (prob == 5) {
        cout << "5/6";
    } else if (prob == 4) {
        cout << "2/3"; 
    } else if (prob == 3) {
        cout << "1/2";
    } else if (prob == 2) {
        cout << "1/3";
    } else if (prob == 1) {
        cout << "1/6";
    } else {
        cout << prob << "/6";
    }
    return 0;
}