#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1);
	int maks=0,p=0,sum=0,a=arr[1],b=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==arr[i+1]){
			if(arr[i]>a)a=arr[i];
			
			p++;
		}else{
			p++;
			if(p>maks)maks=p;
			sum++;
			p=0;
		}
	}
	cout<<maks<<" "<<sum;
}
