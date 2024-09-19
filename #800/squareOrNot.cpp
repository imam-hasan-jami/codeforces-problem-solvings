//2008B - Square or Not

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count1 = count(s.begin(), s.end(), '1');

        int r = sqrt(n);
        if(r * r == n && count1 == 4 * r - 4) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}