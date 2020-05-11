#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int n,sum=0;
	cin>>n;
	fo(n)cin>>arr[i];
	int d=0,l=0,s=0;
	bool bisa=1;
	fo(n){
		if(arr[i]==25){
			d++;
		}else if(arr[i]==50){
			if(d<1)bisa=0;
			else{
			
			l++;
			d--;
		}
		}else if(arr[i]==100){
			if((d<1 && l < 1 ) || (d<3 && l<1 ))bisa=0;
			else if(d>=1 && l >= 1){
				d--;l--;
			}else if(d>=3)d-=3;
			else bisa=0;
		}
	}
	if(bisa)cout<<"YES";
	else cout<<"NO";
}
