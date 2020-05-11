#include<bits/stdc++.h>;
using namespace std;

int a[10],b[10];

int main(){
	int n,sum1=0,sum2=0,x,y;
	for(int i=1;i<=3;i++)cin>>a[i];
	for(int i=1;i<=3;i++)cin>>b[i];
	cin>>n;
	for(int i=1;i<=3;i++)sum1+=a[i];
	for(int i=1;i<=3;i++)sum2+=b[i];
	if(sum1%5==0){
		x=sum1/5;
	}else x=(sum1/5)+1;
	
	if(sum2%10==0){
		y=sum2/10;
	}else y=(sum2/10)+1;
	if(x+y<=n){
		cout<<"YES";
	}else cout<<"NO";
}
