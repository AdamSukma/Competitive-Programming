#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000],genap[1000000],ganjil[1000000];
int sum1=0,sum2=0;
int main(){
	int n;
	cin>>n;
	fo(n)cin>>arr[i];
	fo(n){
		if(arr[i]%2==0){
			sum1++;
			genap[sum1]=arr[i];
			
		}else {
			sum2++;
			ganjil[sum2]=arr[i];
		}
	}
	LL sumtot=0;
	sort(ganjil+1,ganjil+sum2+1);
	fo(sum1)sumtot+=genap[i];
	if(sum2%2==0){
		fo(sum2)sumtot+=ganjil[i];
	}else{
		for(int i=sum2;i>=2;i--)sumtot+=ganjil[i];
	}
	cout<<sumtot;
	
}
