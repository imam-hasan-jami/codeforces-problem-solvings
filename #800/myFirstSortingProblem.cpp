//1971A - My First Sorting Problem

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << min(a,b) << " " << max(a,b) << endl;
    }
    
    return 0;
}