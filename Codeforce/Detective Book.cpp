
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
vector<int> v;

int main(){
	cin>>n;
	fo(i,1,n){
    	int x;
    	cin>>x;
    	v.pb(x);
    	
	}
	fo(i,0,n-1){
		cout<<v[i];
	}
}
