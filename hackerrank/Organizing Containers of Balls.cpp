#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		int n;
		cin>>n;
		int arr[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>arr[i][j];	
			}
		}
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++){
			a[i]=0;
			b[i]=0;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				//cout<<arr[i][j]<<endl;
				a[i]+=arr[i][j];
				b[j]+=arr[i][j];
			}
		}
		/*for(int i=1;i<=n;i++)cout<<a[i]<<" ";
		cout<<endl;
		for(int i=1;i<=n;i++)cout<<b[i]<<" ";
		cout<<endl;*/
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);
		bool possible=true;
		for(int i=1;i<=n;i++){
			if(a[i]!=b[i]){
				possible=false;
			}
		}
		if(possible)cout<<"Possible"<<endl;
		else cout<<"Impossible"<<endl;
	}
	
}
