
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

LL i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n>>m;
	LL ayu[n+11],budi[n+11];
	rep(i,0,n){
		ayu[i]=0;budi[i]=0;
	}
	rep(i,1,n){
		cin>>k;	
		ayu[i] = ayu[i-1]+k;
	}
	rep(i,1,n){
		cin>>k;	
		budi[i] = budi[i-1]+k;
	}
	rep(i,1,n)cout<<ayu[i]<<" ";
	cout<<endl;
	rep(i,1,n)cout<<budi[i]<<" ";
}
