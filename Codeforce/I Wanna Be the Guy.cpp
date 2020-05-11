#include<bits/stdc++.h>
using namespace std;
bool arr[1000000];
int main(){
	int l,n,m,x,y;
	cin>>l;
	for(int i=1;i<=l;i++)arr[i]=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		arr[x]=0;
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>y;
		arr[y]=0;
	}
	bool bener=1;
	for(int i=1;i<=l;i++){
		if(arr[i]==1)bener=0;
	}
	if(bener)cout<<"I become the guy."<<endl;
	else cout<<"Oh, my keyboard!" <<endl;
	
}
