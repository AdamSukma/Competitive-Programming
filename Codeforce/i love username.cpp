#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
int main(){
	int n,min,max,amazing;
	for(int i=1;i<=n;i++)cin>>arr[i];
	min=arr[1];
	max=arr[1];
	for(int i=2;i<=n;i++){
		if(arr[i]>max){
			amazing++;
			max=arr[i];
		}
		if(arr[i]<min){
			amazing++;
			min=arr[i];
		}
	}
	cout<<amazing<<endl;
}
