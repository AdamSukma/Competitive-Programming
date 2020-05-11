#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=12;i++)cin>>arr[i];
	sort(arr+1,arr+13);
	int j=12;
	while(n>0){
		n-=arr[j];
		j--;
		sum++;
		if(j==-1){
			sum=-1;
			break;
		}
	}
	cout<<sum;
}
