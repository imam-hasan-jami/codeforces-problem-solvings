//1873B - Good Kid

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        
        int maxV = 0;
        
        for(int i=0; i<n; i++) {
            vector<int> temp = a;
            temp[i] += 1;
            
            int current = 1;
            
            for(int j=0; j<n; j++) {
                current *= temp[j];
            }
            
            maxV = max(maxV, current);
        }
        
        cout << maxV << endl;
    }

    return 0;
}