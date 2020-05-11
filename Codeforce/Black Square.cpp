#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,sa=0,sb=0,sc=0,sd=0;
	cin>>a>>b>>c>>d;
	char s[1000000];
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='1')sa++;
		else if(s[i]=='2')sb++;
		if(s[i]=='3')sc++;
		if(s[i]=='4')sd++;
	}
	cout<<(sa*a)+(sb*b)+(sc*c)+(sd*d);
	
}
