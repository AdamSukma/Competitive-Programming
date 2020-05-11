
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define all(v) v.begin(),v.end()
#define vi vector < int >
#define vs vector < string >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n;
	vs arr[n];
	fo(i,1,n/2){
		int a;
		string s;
		cin>>a>>s;
		arr[a].pb("-");
	}
	fo(i,1,n/2){
		int a;
		string s;
		cin>>a>>s;
		arr[a].pb(s);
	}
	fo(i,0,n-1){
		if(arr[i].size()>0){
			fo(j,0,arr[i].size()-1)cout<<arr[i][j]<<" ";
		}
	}
	
}
