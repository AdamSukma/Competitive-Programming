#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL arr[100000];
char s[100000];

int main(){
	LL n,x,stres=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)cin>>s[i]>>arr[i];
	for(int i=1;i<=n;i++){
		if(s[i]=='+'){
			x+=arr[i];
		}else{
			if(x-arr[i]>=0){
				x-=arr[i];
			}else{
				stres++;
			}
		}
	}
	cout<<x<<" "<<stres;
}
