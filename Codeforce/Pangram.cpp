#include <bits/stdc++.h>
using namespace std;

bool huruf[30];

int main(){
	int n,hasil=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<s.size();i++){
		
	s[i]=tolower(s[i]);
	huruf[((int)s[i])-97]=1;
	}
	for(int i=0;i<=25;i++){
		if(huruf[i])hasil++;
	}
	//a=97
	//z=122
	if(hasil==26)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
