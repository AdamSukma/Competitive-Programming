#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,nol=0,satu=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='0')nol++;
		if(s[i]=='1')satu++;
	}
	cout<<abs(nol-satu);
	
}
