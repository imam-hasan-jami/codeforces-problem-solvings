//118A - String Task

#include <iostream>
using namespace std;

int main() {
    string s, result = "";
    cin >> s;

    for(int i=0; i<s.size(); i++) {
        s[i] = (char)tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            continue;
        } 
        else {
            result += ".";
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}