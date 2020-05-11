#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int arr[10000000],urut[10000];
void sorting(int a,int n){
	for(int i=a;i<n;i++){
		for(int i=a;i<n;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				swap(urut[i],urut[i+1]);
			}
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	fo(n){
	cin>>arr[i];
	urut[i]=i;	
	}
	sorting(1,n);
	for(int i=1;i<=n/2;i++)cout<<urut[i]<<" "<<urut[n+1-i]<<endl;
	
}
