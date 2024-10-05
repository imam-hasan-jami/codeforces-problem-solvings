//1512A - Spy Detected

#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int a = arr[0], b = arr[1], c = arr[2];
        if(a == b) {
            for(int i=2; i<n; i++) {
                if(arr[i] != a) {
                    cout << i+1 << endl;
                    break;
                }
            }
        } 
        else if(a == c) {
            cout << 2 << endl;
        } 
        else {
            cout << 1 << endl;
        }
    }
    
    return 0;
}