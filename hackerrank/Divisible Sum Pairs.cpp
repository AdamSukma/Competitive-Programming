#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	int sum=0;
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(i!=j){
				if((arr[i]+arr[j])%k==0){
					sum++;
					//cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	cout<<sum;
}
