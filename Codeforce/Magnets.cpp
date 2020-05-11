#include<bits/stdc++.h>
using namespace std;
string s[1000000];
int main(){
	int n,sum=1;
	cin>>n;
	cin>>s[1];
	for(int i=2;i<=n;i++){
		cin>>s[i];
		if(s[i]!=s[i-1])sum++;
	}
	cout<<sum<<endl;
	
}
