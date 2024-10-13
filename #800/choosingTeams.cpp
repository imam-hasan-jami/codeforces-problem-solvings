//432A - Choosing Teams

#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i=0; i<n; i++) {
        if(5 - arr[i] >= k) {
            count++;
        }
    }

    cout << count/3 << endl;

    return 0;
}