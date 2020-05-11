#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	bool cek=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==1)cek=1;
		
	}
	if(cek==1)cout<<-1;
	else cout<<1;
}
