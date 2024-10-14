//1367A - Short Substrings

#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        ans+=s[0];
        for(int i=1;i<s.size()-1;i+=2){
            ans+=s[i];
        }
        ans+=s[s.size()-1];
        cout<<ans<<endl;
    }
    return 0;
}