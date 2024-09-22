//2000A - Primary Task

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while(testCases--) {
        string input;
        cin >> input;

        if(input.size() > 2 && input.substr(0,2) == "10") {
            string number = input.substr(2);
            if(number[0] != '0' && stoi(number) >= 2)
            {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// another approach with different logic
// #include<iostream>
// using namespace std;

// int main() {
//     int testCases;
//     cin>>testCases;
//     while(testCases--)
//     {
//         int input;
//         cin >> input;
//         if((input >= 102 && input <= 109) || (input >= 1010 && input <= 1099)) {
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" <<endl;
//         }
//     }
// }