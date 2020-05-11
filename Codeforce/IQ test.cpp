#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
int main(){
	int n=0,gn=0,gl=0,cek=0,hasil=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	
	cin>>arr[i];
	if(arr[i]%2)gl++;
	else gn++;
	
	}
	if(gn>gl)cek=0;
	else cek=1;
	for(int i=1;i<=n;i++){
		if(arr[i]%2!=cek)hasil=i;
	}
	cout<<hasil<<endl;
}
