#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	cin>>n>>k;
	int arr[n+10];
	fo(i,1,k)cin>>arr[i];
	arr[0]=0;
	arr[k+1]=n-1;
	sort(arr,arr+k+2);
	//fo(i,0,k+1)cout<<arr[i]<<" ";
//cout<<endl;
	float selisih[n+10];
	fo(i,0,k)selisih[i]=abs(arr[i]-arr[i+1]);
	//fo(i,0,k)cout<<selisih[i]<<" ";
	//cout<<endl;
	fo(i,1,k-1)selisih[i]=floor(selisih[i]/2);
	int maks=selisih[0];
	fo(i,0,k){
		if(maks<selisih[i])maks=selisih[i];
	}
	cout<<maks;
	
}
