#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	int n,h,x=0,hasil=0;
	cin>>n>>h;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(arr[i]>h)x++;
	}
	hasil=n+x;
	cout<<hasil<<endl;
}
