#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int kecil=0,cap=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))cap++;
		else kecil++;
	}
	if(cap>kecil){
		for(int i=0;i<s.size();i++)s[i]=toupper(s[i]);
	}else for(int i=0;i<s.size();i++)s[i]=tolower(s[i]);
	cout<<s<<endl;
}
