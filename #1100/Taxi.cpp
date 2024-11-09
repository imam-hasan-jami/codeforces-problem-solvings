//158B - Taxi

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[5] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    int ans = a[4] + a[3] + (a[2] + 1) / 2;
    a[1] -= a[3];
    if (a[2] % 2 == 1) {
        a[1] -= 2;
    }
    if (a[1] > 0) {
        ans += (a[1] + 3) / 4;
    }
    cout << ans << endl;

    return 0;
}