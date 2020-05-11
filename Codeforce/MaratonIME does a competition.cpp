#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	long long n,a=0,b=0,c=0,d=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(i%4==1)a+=arr[i];
		else if(i%4==2)b+=arr[i];
			else if(i%4==3)c+=arr[i];
				else if(i%4==0)d+=arr[i];
	
	}
	long long maks=max(a,b);
	maks=max(maks,c);
	maks=max(maks,d);
	if(a==maks)cout<<"A";
	else if(b==maks)cout<<"B";
	else if(c==maks)cout<<"C";
	else if(d==maks)cout<<"D";
}
