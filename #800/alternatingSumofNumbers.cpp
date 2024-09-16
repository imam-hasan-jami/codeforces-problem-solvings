#include<iostream>
using namespace std;

int main() {
    int sum=0;
    int testCase, numberOfInput, input;

    cin >> testCase;

    for(int i=0; i<testCase; i++) {
        cin >> numberOfInput;
        for(int j=0; j<numberOfInput; j++) {
            cin >> input;
            if(j%2==0) {
                sum += input;
            }
            else {
                sum -= input;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}