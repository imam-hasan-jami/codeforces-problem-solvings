//758A - Holiday Of Equality

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxn = -1;
    int sum = 0;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        sum += x;
        maxn = max(maxn, x);
    }

    cout << maxn * n - sum << endl;

    return 0;
}