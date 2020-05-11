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
	
	for(int i=1;i<=p1;i++)cout<<s[i]<<"  ";
	cout<<endl;
	for(int i=1;i<=p2;i++)cout<<d[i]<<"  ";
	cout<<endl;
	for(int i=1;i<=p3;i++)cout<<t[i]<<"  ";
	cout<<endl;
}
