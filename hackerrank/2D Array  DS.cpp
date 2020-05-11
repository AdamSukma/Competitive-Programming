#include<bits/stdc++.h>
using namespace std;
int arr[10][10];
int sum(int x,int y){
	int jumlah=arr[x][y];
	jumlah+=arr[x][y+1];
	jumlah+=arr[x][y+2];
	jumlah+=arr[x+1][y+1];
	jumlah+=arr[x+2][y];
	jumlah+=arr[x+2][y+1];
	jumlah+=arr[x+2][y+2];
	return jumlah;
	
	
}
int main(){
	
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			cin>>arr[i][j];
		}
	}
	int maks=-9999;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(sum(i,j)>maks){
				maks=sum(i,j);
				
			}
		}
	}
	
	cout<<maks;
	
}
