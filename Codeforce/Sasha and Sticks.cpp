#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n,k,sum=0,x=0;;
	cin>>n>>k;
	 x=n-(n%k);
	 sum=n/k;
	 if(sum%2==1)cout<<"YES";
	 	else cout<<"NO";
	
}
