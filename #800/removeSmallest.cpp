//1399A - Remove Smallest

#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(a.begin(), a.end());

        bool flag = true;

        for(int i=1; i<n; i++) {
            if(a[i] - a[i-1] > 1) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}