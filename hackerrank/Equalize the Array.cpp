
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
int arr[1000];
//vector < vector<int> > arr;
vector<int> v(n);

int main(){
   	cin >> n;
	fo(i,1,n){
		int x;
		cin>>x;
		v.pb(x);
	}
	//fo(i,0,n-1)cout<<v[i]<<" ";
	fo(i,0,n-1){
		arr[v[i]]++;
	}
	int maks=-1;
	fo(i,0,100){
		if(maks<arr[i])maks=arr[i];
	}
	cout<<n-maks;
	
}
