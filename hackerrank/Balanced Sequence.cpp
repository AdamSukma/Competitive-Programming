#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;

char convert(char a){
	if(a=='(')return ')';
	else if(a==')')return '(';
}

int main(){
	int n;
	cin>>n;
	char s[n+1];
	cin>>s;
	fo(i,0,n-1)s[i]=convert(s[i]);
	cout<<s;
}
