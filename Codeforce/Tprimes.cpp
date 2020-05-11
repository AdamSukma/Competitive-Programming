#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];
bool isprime[10000000];
vector<int> prime;
void sieve(long long x){
	memset(isprime,1,sizeof(isprime));
	isprime[1]=0;
	
	for(long long i=2;i*i<x;i++){
		if (isprime[i]){
		
			for(long long j=i*2;j<x;j+=i){
				isprime[j]=0;
				//cout<<i<<endl;
			}}
		
	}
}
int main(){
	sieve(10000000);
	LL x,y,n,m,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		m=sqrt(x);
		//cout<<m<<" "<<sqrt(x)<<endl;
		if(m==sqrt(x)){
			if(isprime[m]==1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
