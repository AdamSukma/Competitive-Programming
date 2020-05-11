#include<bits/stdc++.h>
using namespace std;
int dp(int x){
	if(x==1 || x==2 || x==3 || x==4 || x==5)return 1;
	int hasil=min(dp(x-1)+1,dp(x-2)+1);
	hasil=min(hasil,dp(x-3)+1);
	hasil=min(hasil,dp(x-4)+1);
	hasil=min(hasil,dp(x-5)+1);
	return hasil;
}
int main(){
	int n;
	cin>>n;
	cout<<dp(n);
}
