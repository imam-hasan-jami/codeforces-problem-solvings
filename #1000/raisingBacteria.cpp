//579A - Raising Bacteria

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, counter = 0;
    cin >> x;
    
    while(x > 0) {
        if(x & 1) {
            counter++;
        }
        x >>= 1;
    }
    
    cout << counter << endl;

    return 0;
}