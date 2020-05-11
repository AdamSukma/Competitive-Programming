#include<bits/stdc++.h>
using namespace std;
int arr[6][6];
int main(){
	int x,y;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++)cin>>arr[i][j];
		
	}
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++)
		if(arr[i][j]==1){
			x=i;y=j;
		}
		
	}
	cout<<abs(x-3)+abs(y-3)<<endl;
	
}
