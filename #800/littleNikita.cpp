//1977A - Little Nikita

#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        int x, y;
        cin >> x >> y;
        if(y > x) {
            cout << "NO" << endl;
        }
        else if ( (x-y) % 2 == 0 ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}