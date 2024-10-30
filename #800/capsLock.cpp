//131A - cAPS lOCK

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char ch;
    bool caps = true;
    
    for(int i=1; i<s.length(); i++) {
        if(islower(s[i])) {
            caps = false;
        }
    }
    
    if(caps == true) {
        for(int i=0; i<s.length(); i++) {
            if(islower(s[i])) {
                ch = toupper(s[i]);
            } else {
                ch = tolower(s[i]);
            }
            cout << ch;
        }
    } else {
        cout << s;
    }

    return 0;
}