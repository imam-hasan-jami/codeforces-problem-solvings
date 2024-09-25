//1915C - Can I Square?

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double sum = 0;
        double a;
        int n;
        cin >> n;
        while(n--) {
            cin >> a;
            sum += a;
        }
        if(sqrt(sum) - (int)sqrt(sum)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}