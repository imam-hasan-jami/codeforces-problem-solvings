//1829A - Love Story

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        string x = "codeforces";
        cin >> s;
        int counter = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] != x[i]) counter++;
        }
        
        cout << counter << endl;
    }

    return 0;
}