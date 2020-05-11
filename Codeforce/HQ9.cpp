#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	bool a=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')a=1;
	}
	if(a)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
