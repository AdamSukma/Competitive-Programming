#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
int main(){
	int n,max,min,k,l;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	max=arr[1];
	min=arr[1];
	k=1;
	l=1;
	for(int i=1;i<=n;i++){
		if(arr[i]>max){
			max=arr[i];
			k=i;
		}
		if(arr[i]<=min){
			min=arr[i];
			l=i;
		}
	}
	//cout<<max<<' '<<k<<' '<<min<<' '<<l;
	if(k>l)l++;
	cout<<k-1+n-l<<endl;
	
}
