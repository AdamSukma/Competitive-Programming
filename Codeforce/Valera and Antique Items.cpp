#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main(){
	int n,v,k,s,sum=0;
	cin>>n>>v;
	memset(arr,0,1000);
	for(int i=1;i<=n;i++){
		cin>>k;
		for(int j=1;j<=k;j++){
			cin>>s;
			if(v>s){
				
				arr[i]=1;
			//	cout<<i<<endl;
			}
		
			
			
		}
			if(arr[i]==1)sum++;
		
	}
	cout<<sum<<endl;
	for(int i=1;i<=n;i++){
		if(arr[i]==1)cout<<i<<" ";
	}
}
