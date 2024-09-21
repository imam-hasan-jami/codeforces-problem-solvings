//2008C - Longest Good Array

#include<iostream>
using namespace std;
int main(){
	
	int t,a,b,k=0,i,j;
	cin>>t;
	while(t--){
		
	cin>>a>>b;
	for(i=a,j=1;i<=b;j++){
		k++;
		i=i+j;
	}
	
	cout<<k<<endl;
	k=0;
	}
	return 0;
}