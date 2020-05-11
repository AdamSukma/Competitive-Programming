#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int memo[1000000];
int cek(int x){
	//cout<<x<<endl;
	if(memo[x]!=-1)return memo[x];
	if(x==1)return 1;
	else{
		if(arr[x]>=arr[x-1]){
			if(memo[x]==-1){
			memo[x]=cek(x-1)+1;
		return memo[x];
	}else return memo[x];
	}
		else return 1;
	}
}
int main(){
	int n,a;
	for(int i=0;i<=1000000;i++)memo[i]=-1;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	int max=0;
	for(int i=1;i<=n;i++){
		a=cek(i);
		if(a>max)max=a;
	}
	cout<<max<<endl;
	
}
