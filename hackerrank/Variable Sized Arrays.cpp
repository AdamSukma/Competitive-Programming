#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
vector < vector<int> > arr;
 
int main(){
    cin>>n>>k;
    fo(i,1,n){
    	cin>>m;
    	vc v;
    	fo(j,1,m){
    		int l;
    		cin>>l;
    		v.pb(l);
		}
		arr.push_back(v);
	}
	fo(i,1,k){
		int q,w;
		cin>>q>>w;
		cout<<arr[q][w]<<endl;
	}
   
}
