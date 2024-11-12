//492A - Vanya and Cubes

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0;
    while(n >= 0) {
        i++;
        n -= i * (i + 1) / 2;
    }

    cout << i - 1;

    return 0;
}