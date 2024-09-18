#include <iostream>
using namespace std;

int main() {
    string s[501];
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int n;
        cin >> n;

        for(int i=1; i<=n; i++) {
            cin >> s[i];
        }

        for(int i=n; i>=1; i--) {
            cout << s[i].find("#") + 1 << endl;
        }
    }

    return 0;
}