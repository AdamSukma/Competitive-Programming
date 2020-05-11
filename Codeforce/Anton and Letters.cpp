#include<bits/stdc++.h>
using namespace std;

bool cek[26];

int main(){
	//a=97
	string s;
	cin>>s;
	//cout<<(int)s[0];
	for(int i=0;i<26;i++)cek[i]=0;
	cek[(int)s[1]-97]=1;
	while(s[s.size()-1]!='}'){
		cin>>s;
		cek[(int)s[0]-97]=1;
		
		
	}
	int sum=0;
	for(int i=0;i<26;i++){
		if(cek[i])sum++;
	}
	cout<<sum<<endl;
}
