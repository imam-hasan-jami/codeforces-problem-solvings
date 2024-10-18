//431A - Black Square

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i=1; i<=4; i++) {
        cin >> arr[i];
    }
    
    string s;
    cin >> s;
    int ans = 0;
    
    for(int i=0; i<s.size(); i++) {
        ans += arr[s[i] - '0'];
    }
    
    cout << ans;

    return 0;
}