#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,t;
	cin>>n>>t;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=t;i++){
		int l,r;
		cin>>l>>r;
		l++;r++;
		int min=arr[l];
		for(int j=l;j<=r;j++){
			if(min>=arr[j])min=arr[j];
		}
		cout<<min<<endl;
	}
	
}
