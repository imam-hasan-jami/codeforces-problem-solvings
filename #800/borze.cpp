//32B - Borze

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') cout << 0;
        else if(s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-') {
            cout << 2;
            i++;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
    
//     for(int i=0; i<s.length(); i++) {
//         if(s[i] == '.') {
//             cout << '0';
//         }
//         else if(s.substr(i,2) == "-.") {
//             cout << '1';
//             i++;
//         }
//         else if(s.substr(i,2) == "--") {
//             cout << '2';
//             i++;
//         }
//     }
//     return 0;
// }