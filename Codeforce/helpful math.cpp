#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int so=0,sd=0,st=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1')so++;
		if(s[i]=='2')sd++;
		if(s[i]=='3')st++;
	}
	for(int i=0;i<so;i++){
		cout<<1;
		if(i+1<so)cout<<'+';
	}
	if(sd>0 && so>0)cout<<'+';
	for(int i=0;i<sd;i++){
		cout<<2;
		if(i+1<sd)cout<<'+';
	}
	if(st>0 && (sd>0||so>0))cout<<'+';
	
	for(int i=0;i<st;i++){
		cout<<3;
		if(i+1<st)cout<<'+';
	}
	cout<<endl;
	
	
}
