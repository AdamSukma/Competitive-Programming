#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin>>n;
	char c[n+1];
	for(int i=1;i<=n;i++)cin>>c[i];
	int level=0,valley=0;
	for(int i=1;i<=n;i++){
		if(c[i]=='D')level--;
		if(c[i]=='U')level++;
		if(level==0 && c[i]=='U')valley++;
	}
	cout<<valley;
}
