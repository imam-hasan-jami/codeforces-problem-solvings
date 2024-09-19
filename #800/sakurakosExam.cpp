//2008A - Sakurako's Exam

#include <iostream>
using namespace std;

int main() {
    int testCase, a, b;
    cin >> testCase;

    while(testCase--) {
        cin >> a >> b;

        if(a>0 && a%2==0) {
            cout << "YES" << endl;
        }
        else if(a==0 && b%2==0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}