#include<bits/stdc++.h>
using namespace std;

int arr[10000000],s[10000000],d[1000000],t[10000000];
int p1=0,p2=0,p3=0;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if
		(arr[i]==1){
			p1++;
			s[p1]=i;
		}
		if(arr[i]==2){
			p2++;
			d[p2]=i;
		}
		if(arr[i]==3){
			p3++;
			t[p3]=i;
		}
	}
	int sum=min(p1,p2);
	sum=min(sum,p3);
	if(sum==0)cout<<0;
	else cout<<sum<<endl;
	for(int i=1;i<=sum;i++){
		cout<<s[i]<<' '<<d[i]<<' '<<t[i]<<endl;
	}
	
	
}
