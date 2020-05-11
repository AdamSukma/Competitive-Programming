#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int  memo[10000000];
int cek[10000000];
int cari(int x,int y){
	cout<<x<<" "<<memo[x]<<endl;
	
	cek[x]++;
	if(cek[x]<=10){
	if(memo[x]==0){
	if(x>=y){
		memo[x]=x-y;
		return 100;
	}
	if(x==y)return 0;
	if(x<0)return 1;
	
	memo[x]=min(cari(x-1,y)+1,999);
	cout<<x<<" "<<memo[x]<<endl;
}
}
return memo[x];
}

int main(){
	int n,m;
	fo(1000000){
		memo[i]=0;
		cek[i]=0;
	}
	cin>>n>>m;
	cout<<cari(n,m);
	
	
		
}
