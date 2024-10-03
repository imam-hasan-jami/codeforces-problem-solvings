//750A - New Year and Hurry

#include<iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int time = 60 * 4;
    int rt = time - k;
    int i;
    
    for(i=1; rt>=i*5; i++) {
        rt = rt - i*5;
    }

    if(i<=n) cout << i-1;
    else cout << n;

    return 0;
}