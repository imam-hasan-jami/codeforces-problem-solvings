//1433A - Boring Apartments

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        
        int digit = x % 10;
        int length = to_string(x).length();
        
        int presses = 10 * (digit - 1);
        presses += (length * (length + 1)) / 2;
        
        cout << presses << endl;
    }

    return 0;
}