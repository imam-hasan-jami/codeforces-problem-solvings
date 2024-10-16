//580A - Kefa and First Steps

#include <iostream>
using namespace std;

int main() {
    int maxVal = 0, counter = 0, prevVal = 0;
    int n;
    cin >> n;
    while(n--) {
        int currentVal;
        cin >> currentVal;
        
        if(currentVal >= prevVal) {
            counter++;
        }
        else {
            maxVal = max(maxVal, counter);
            counter = 1;
        }
        prevVal = currentVal;
    }
    
    cout << max(maxVal, counter);

    return 0;
}