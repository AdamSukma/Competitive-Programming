#include<bits/stdc++.h>
using namespace std;

long long arr[1000000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	int maks=-9999,min=999999999,sumk=-1,sumn=-1;
	for(int i=1;i<=n;i++){
		if(arr[i]>maks){
			maks=arr[i];
			sumk++;
		}
		if(arr[i]<min){
			min=arr[i];
			sumn++;
		}
	}
	cout<<sumk<<" "<<sumn;
}
