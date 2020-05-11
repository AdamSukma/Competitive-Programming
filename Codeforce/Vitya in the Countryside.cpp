#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	bool naik=1;
	if(arr[n]>arr[n-1])naik=1;
	else naik=0;
	if(arr[n]==15)naik=0;
	if(arr[n]==0)naik=1;
	if(n<=1 && arr[1]!=15 && arr[1] !=0 )cout<<-1;
	else if(naik==1)cout<<"UP";
	else cout<<"DOWN";
	
}
