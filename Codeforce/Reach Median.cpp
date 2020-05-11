
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n>>k;
	LL arr[n+1];
	fo(i,1,n)cin>>arr[i];
	int sum=0;
	int x=ceil(n/2)+1;
	
	sort(arr+1,arr+n+1);
	while(arr[x]!=k){
		
			sum+=abs(arr[x]-k);
			
			arr[x]=k;
			sort(arr+1,arr+n+1);
	}
	cout<<sum;
	
}
