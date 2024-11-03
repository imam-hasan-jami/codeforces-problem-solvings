//339B - Xenia and Ringroad

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    int tasks[m];
    for(int i=0; i<m; i++) {
        cin >> tasks[i];
    }
    
    long long curPos = 1;
    long long totTime = 0;
    
    for(int i=0; i<m; i++) {
        int targetHouse = tasks[i];
        
        if(targetHouse >= curPos) {
            totTime += targetHouse - curPos;
        } else {
            totTime += n - curPos + targetHouse;
        }
        
        curPos = targetHouse;
    }
    
    cout << totTime << endl;

    return 0;
}