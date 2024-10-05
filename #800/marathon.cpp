//1692A - Marathon

#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;

        ans += bool(b>a) + bool(c>a) + bool(d>a);

        cout << ans << endl;
    }
    
    return 0;
}