#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int arr[10000000];

int main(){
	long long n,max,min,sum1=0,sum2=0;
	cin>>n;
	fo(n)cin>>arr[i];
	sort(arr+1,arr+n+1);
	max=arr[n];
	min=arr[1];
	fo(n){
		if(arr[i]==max)sum1++;
		if(arr[i]==min)sum2++;
	}
	if(max==min){
		cout<<max-min<<" "<<(n*(n-1))/2;
	}else cout<<max-min<<" "<<sum1*sum2;
}
