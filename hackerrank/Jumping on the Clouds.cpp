#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=0;i<n;i++)cin>>arr[i];
	int p=0;
	int hasil=100;
	do{
	if(arr[p]==1)hasil-=2;
	hasil--;
	p+=k;
	p%=n;
	//cout<<p<<endl;	
	}while(p!=0);
	
	cout<<hasil;
}
