#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		int n,a,b;
		cin>>n>>a>>b;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			arr[i]=(a*(n-i))+(b*(i-1));
		}
		sort(arr+1,arr+n+1);
		for(int i=1;i<=n;i++){
			if(arr[i]==arr[i+1])arr[i]=-1;
			//cout<<arr[i]<<" ";
		}
		for(int i=1;i<=n;i++){
			if(arr[i]!=-1)cout<<arr[i]<<" ";
		}
		cout<<endl;
		
	}
	
}
