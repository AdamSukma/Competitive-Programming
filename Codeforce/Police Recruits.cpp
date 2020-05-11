#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main(){
	int n,hasil=0,jawab=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		hasil+=arr[i];
		if(hasil<0){
			hasil=0;
			jawab++;
		}
	}
	cout<<jawab<<endl;
}
