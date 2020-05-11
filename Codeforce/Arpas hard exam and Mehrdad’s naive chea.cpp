#include<bits/stdc++.h>
using namespace std;

int arr[]={6,8,4,2};

int main(){
	int n;
	cin>>n;
	if(n==0)cout<<1;
	else cout<<arr[n%4];
}
