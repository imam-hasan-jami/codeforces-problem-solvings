//1999A - A+B Again?

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) {
        int n;
        cin >> n;
        cout << n % 10 + n / 10 << endl;
    }
    return 0;
}