#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	long long a,b,n,t;
	cin>>a>>b>>n;
	t=(abs(a)+abs(b))%2;
	//cout<<a<<" "<<b<<" "<<t<<" "<<n<<" "<<a+b<<endl;
	if(n>=abs(a)+abs(b) && n%2==t)cout<<"YES";
	else cout<<"NO";
	
}
