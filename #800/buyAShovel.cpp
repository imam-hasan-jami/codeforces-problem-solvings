//732A - Buy a Shovel

#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for(int i=1; i<=10; i++) {
        if(i*k%10 == r || i*k%10 == 0) {
            cout << i;
            break;
        }
    }
    
    return 0;
}