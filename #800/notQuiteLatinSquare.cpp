//1915B - Not Quite Latin Square

#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a=0, b=0, c=0;
        char ch;

        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin >> ch;
                if(ch == 'A') a++;
                else if(ch == 'B') b++;
                else if(ch == 'C') c++;
            }
        }
        if(a < 3) cout << "A" << endl;
        else if(b < 3) cout << "B" << endl;
        else if(c < 3) cout << "C" << endl;
    }
    
    return 0;
}