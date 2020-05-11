#include<bits/stdc++.h>
using namespace std;
#define LL long long

LL cari(int x){
	if(x<1)return 1;
	else if(x%2==0)return cari(x-1)+1;
	else return cari(x-1)*2;
}

int main(){
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		cout<<cari(n)<<endl;
	}
}
