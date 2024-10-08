//318A - Even Odds

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long odd = n/2;
    long long even = n/2;

    if(n%2 != 0) {
        odd++;
    }

    if(k <= odd) {
        cout << 2*k-1 << endl;
    } else {
        cout << 2*(k-odd) << endl;
    }

    return 0;
}