#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)cin>>arr[i][j];
	}
	int hasil=2*n*m;
	for(int i=1;i<=n;i++){
		hasil+=arr[i][1]+arr[i][m];
	}
	for(int i=1;i<=m;i++){
		hasil+=arr[1][i]+arr[n][i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j!=m)hasil+=abs(arr[i][j]-arr[i][j+1]);
			if(i!=n)hasil+=abs(arr[i][j]-arr[i+1][j]);
		}
	}
	cout<<hasil;
}
