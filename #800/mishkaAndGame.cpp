//703A - Mishka and Game

#include <iostream>
using namespace std;

int main() {
    int round;
    int mScore = 0, cScore = 0;
    cin >> round;

    while(round--) {
        int m, c;
        cin >> m >> c;

        if(m > c) {
            mScore++;
        } else if(c > m) {
            cScore++;
        }
    }

    if(mScore > cScore) {
            cout << "Mishka" << endl;
        } else if(cScore > mScore) {
            cout << "Chris" << endl;
        } else {
            cout << "Friendship is magic!^^" << endl;
        }

    return 0;
}