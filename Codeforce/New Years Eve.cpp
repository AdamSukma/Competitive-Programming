#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
//LL arr[10000000];

int main(){
	LL n,k;
	cin>>n>>k;
	if(k==1)cout<<n;
	else {
		LL sum=0;
		while(n>0){
			sum++;
			n/=2;
		}
		LL result=0;
		LL dua=1;
		for(int i=1;i<=sum;i++){
			result+=dua;
			dua*=2;
		}
		cout<<result;
	}
}
