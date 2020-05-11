#include<bits/stdc++.h>
using namespace std;

char s[10000][10000];

int main(){
	int n,m,hasil=0;;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)cin>>s[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]=='C' || s[i][j]=='M' || s[i][j]=='Y')hasil=1;
		}
		
	}
	if(hasil==1)cout<<"#Color"<<endl;
	else cout<<"#Black&White"<<endl;
}
