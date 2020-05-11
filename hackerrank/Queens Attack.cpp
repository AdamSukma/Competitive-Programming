#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)arr[i][j]=1;
	}
	int x,y;
	cin>>x>>y;
	for(int i=1;i<=k;i++){
		int p,q;
		cin>>p>>q;
		arr[p][q]=0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
