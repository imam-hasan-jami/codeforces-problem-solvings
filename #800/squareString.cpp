//1619A - Square String?

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        int length = s.size();
        
        if(length % 2 == 0 && s.substr(0, length/2) == s.substr(length/2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}