
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m,t;
//vector < vector<int> > arr;
//vector<int> v(n);
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
void prima(long long x){
	prime.push_back(2);
	for(long long i=3;i<x;i+=2){
		if(isprime[i]){
			//cout<<i<<endl;
			prime.push_back(i);
		}
	}
	
}
void hasil(LL x){
	LL sum=0;
	bool arr[int(cbrt(x))+1];
	memset(arr,1,sizeof(arr)+1);
	for(int i=2;i<sizeof(arr);i++){
		int c=i*i*i;
		
		cout<<sum<<" "<<arr[i]<<" "<<i<<" "<<x/(c)<<endl;
		if(arr[i]==1){
			sum+=x/(c);
			for(int j=i*i;j<=sizeof(arr);j+=i*i){
				arr[j]=0;
			}
			
		}
		
	}
	cout<<sum<<endl;
	
}
int main(){
	sieve(10000000);
	prima(10000000);
	cin>>t;
	
	
	//out<<int(cbrt(t))<<endl;
	for(int i=1;i<=t;i++){
		cin>>n;
		cout<<LLONG_MAX;
	}
	
	
}
