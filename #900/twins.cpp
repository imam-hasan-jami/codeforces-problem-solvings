//160A - Twins

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    int sum = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a+n, greater<int>());

    int sum2 = 0;
    int count = 0;

    for(int i=0; i<n; i++) {
        sum2 += a[i];
        count++;
        if(sum2 > sum/2) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}