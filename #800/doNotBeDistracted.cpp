//1520A - Do Not Be Distracted!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;
        
        set<char> com;
        
        char lastTask = '\0';
        
        bool caught = false;
        
        for(char task : tasks) {
            if(task != lastTask) {
                if(com.count(task)) {
                    caught = true;
                    break;
                }
                com.insert(task);
                lastTask = task;
            }
        }
        
        cout << (caught ? "NO" : "YES") << endl;
    }

    return 0;
}