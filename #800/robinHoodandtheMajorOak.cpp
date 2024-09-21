//2014B - Robin Hood and the Major Oak

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, k;
        cin >> n >> k;

        int year = max(1, n - k + 1);

        int total = (n * (n + 1)) / 2 - ((year - 1) * year) / 2;

        if (total % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
