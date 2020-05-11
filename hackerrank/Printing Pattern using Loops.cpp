#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=(n);i++){
		int p=n;
		for(int j=1;j<=n;j++){
			cout<<p<<' ';
			if(j-i<0)p--;
		}
		
		for(int j=n;j>1;j--){
			
			if(j-i-1<0)p++;
			cout<<p<<' ';
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		int p=n;
		for(int j=1;j<=n;j++){
			cout<<p<<' ';
			if(j-i<0)p--;
		}
		
		for(int j=n;j>1;j--){
			
			if(j-i-1<0)p++;
			cout<<p<<' ';
		}
		cout<<endl;
	}
}
