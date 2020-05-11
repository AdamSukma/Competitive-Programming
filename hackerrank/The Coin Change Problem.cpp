
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m;
int arr[100];
LL memo[1000];
//vector < vector<int> > arr;
//vector<int> v(n);
LL dp(int x){
	if(x<=0)return 0;
		else{
		
		if(memo[x]==0){
			fo(i,1,m){
				if(
			}
		}else {
			return memo[x];
		}
	}
}
int main(){
   	cin >> n>>m;
   	fo(i,1,1000)memo[i]=0;
	fo(i,1,m)cin>>arr[i];
	sort(arr+1,arr+m+1);
	
}
