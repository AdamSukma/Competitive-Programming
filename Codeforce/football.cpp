#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int jo=1,ji=1;
	for(int i =0;i<s.size();i++){
		if(s[i]=='0' && s[i+1]=='0')jo++;
		else if(s[i]=='0' && s[i+1]=='1')jo=1;
		
		if(s[i]=='1' && s[i+1]=='1')ji++;
		else if(s[i]=='1' && s[i+1]=='0')ji=1;
	//	cout<<ji<<' '<<jo<<endl;
		if(ji>=7 ||jo>=7)break;
	}
	if(ji>=7 ||jo>=7)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
