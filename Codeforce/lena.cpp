#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		for(int j=((n+1-i)*2)-1;j>=0;j--)cout<<" ";
	if(i!=1)	for(int j=0;j<i;j++)cout<<j<<" ";
	else cout<<0;
		for(int j=i-2;j>=1;j--)cout<<j<<" ";
		if(i!=1)cout<<0;
		cout<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int j=((n+1-i)*2)-1;j>=0;j--)cout<<" ";
		if(i!=1)for(int j=0;j<i;j++)cout<<j<<" ";
			else cout<<0;
			
		for(int j=i-2;j>=1;j--)cout<<j<<" ";
		if(i!=1)cout<<0;
		cout<<endl;
}
}
