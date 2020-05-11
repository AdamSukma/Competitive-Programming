#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	cin>>n;
	int arr[n+1];
	fo(i,1,n)cin>>arr[i];
	bool cek[n+1];
	memset(cek,0,n+1);
	fo(i,1,n){
		cek[arr[i]]=1;
	}
	fo(i,1,n){
		if(cek[i]==0)cout<<i<<" ";
	}
}
