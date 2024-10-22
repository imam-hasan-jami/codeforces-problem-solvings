//1722A - Spell Check

#include <iostream>
using namespace std;

int main() {
    string s = "Timur";
    sort(s.begin(), s.end());
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        sort(a.begin(), a.end());
        
        if(s == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}