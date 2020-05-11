#include<bits/stdc++.h>
using namespace std;
	int key[10000],usb[10000];
int main(){
	int n,m,s;
	cin>>s>>n>>m;

	for(int i=1;i<=n;i++)cin>>key[i];
	for(int i=1;i<=m;i++)cin>>usb[i];

	//sort(key+1,key+n+1);
	//sort(usb+1,usb+1+m);
	int maks=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			//cout<<key[i]+usb[j]<<" "<<maks<<endl;
			if((maks<key[i]+usb[j]) && key[i]+usb[j]<=s)maks=key[i]+usb[j];
		}
	}
	cout<<maks;
}
