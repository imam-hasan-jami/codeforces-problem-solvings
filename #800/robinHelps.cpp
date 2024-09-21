//2014A - Robin Helps

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int n, k;
        cin >> n >> k;
        
        int hasGold = 0;
        int givenGold = 0;
        
        for (int i = 1; i <= n; i++) {
            int totalGold;
            cin >> totalGold;
            
            if (totalGold >= k) {
                hasGold += totalGold;
            } else if (totalGold == 0 && hasGold > 0) {
                hasGold -= 1;
                givenGold += 1;
            }
        }
        
        cout << givenGold << endl;
    }
    
    return 0;
}