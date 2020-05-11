#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL arr[10000000],p=0;
void sieve(LL x){
	//memset(isprime,1,sizeof(isprime));
	//isprime[1]=0;
	
	for(int i=1;i*i<=x;i++){
		if(x%i==0){
			p++;
			arr[p]=i;
			
		}
		
	}
}

int main(){
	int n,x,sum=0;
	cin>>x>>n;
	sieve(n);
	for(int i=p+1;i<=(2*p);i++){
		arr[i]=n/arr[i-p];
	}
	//for(int i=1;i<=(2*p);i++)cout<<arr[i]<<" ";
	
	for(int i=1;i<=p;i++){
		if(arr[i]<=x && arr[i+p]<=x && arr[i]!=arr[i+p])sum+=2;
		if(arr[i]<=x && arr[i+p]<=x && arr[i]==arr[i+p])sum+=1;
	}
	if(n==1)sum=1;
	cout<<sum;
}
