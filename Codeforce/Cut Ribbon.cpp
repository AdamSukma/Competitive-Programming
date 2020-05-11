#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,test=0;
int memo[1000000];
int dp(int x){
	//if(x<a && x<b && x<c)return 1;
	int hasil=0;
	
	if(n==a || n==b || n==c){
		int lebih=0,l[3],sama,s[3],kurang,k[3];
		if(a>n){
			l[lebih]=1;
			lebih++;
		}
		if(b>n){
			l[lebih]=2;
			lebih++;
		}
		if(c>n){
			l[lebih]=3;
			lebih++;
		}
	
		if(lebih>=2)return 1;
		if(a>n && b==n && n%c!=0)return 1;
		if(a>n && n%b!=0 && c==0)return 1;
		if(a==n && n%b!=0 && c>n)return 1;
		if(a==n && b>n && n%c!=0)return 1;
		if(n%a!=0 && b==n && c>n)return 1;
		if(n%a!=0 && b>n && c==n)return 1;
	}
	//cout<<"   "<<x<<"  "<<memo[x]<<endl;
		if(x<0)return -9999999;
	//if(x==0)cout<<memo[0];
	if(x==0)return 1;
	if(x==a && (a%b!=0 || a==b)  && (a%c !=0 || a==c) && x!=n){
		memo[x]=1;
	return 1;
}
	if(x==b && (b%a!=0 || b==a)  && (b%c !=0 || b==c) && x!=n){
		memo[x]=1;
	return 1;
}
	
	if(x==c && (c%b!=0 || c==b)  && (c%a !=0 || c==a) && x!=n){
		memo[x]=1;
	return 1;
}
	


	if(a==n && b==n && c==n)return 1;
	//if(x==a || x==b || x==c)return 1;

	
	
	if(memo[x]==0){
		
		hasil=max(dp(x-a)+1,dp(x-b)+1);
		//cout<<"   "<<x<<"  "<<hasil<<endl;
		hasil=max(hasil,dp(x-c)+1);
		
		memo[x]=hasil;
		
		
	}
	
	return memo[x];
}


int main(){
	for(int i =-n;i<=n;i++)memo[i]=0;
	cin>>n>>a>>b>>c;
	int cek=0,x;
	x=dp(n);
	for(int i=0;i<n;i++){
			if(memo[i]>0)cek++;
		}
		if(cek>0)cout<<x<<endl;
		else cout<<1<<endl;
	
}
