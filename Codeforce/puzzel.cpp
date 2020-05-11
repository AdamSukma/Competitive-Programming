#include<bits/stdc++.h>
using namespace std;


int arr[1000000];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>arr[i];
	
	sort(arr+1,arr+m+1);
	int min=1000000;
	if(m>=4){
	
	for(int i=1;i<=m-n+1;i++){
		if(arr[i+n-1]-arr[i]<min)min=arr[i+n-1]-arr[i];
		//cout<<min<<endl;
	}
	}else if(m==3){
	if(n==3)min=arr[3]-arr[1];
	else {
		min=arr[2]-arr[1];
		if(arr[3]-arr[2]<min)min=arr[3]-arr[2];
	}
	}
	else if(m==2)min=arr[2]-arr[1];
	
	cout<<min<<endl;
	
}



