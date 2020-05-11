#include<bits/stdc++.h>
using namespace std;
int arr[10000],a[10000];
bool temp(int a, int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)a[i]=arr[i];
	sort(a+1,a+n+1,temp);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i]==a[j]){
				cout<<j<<" ";
				break;
			}
		}
	}
}
