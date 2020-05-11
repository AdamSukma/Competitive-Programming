
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
int temp(int a,int b){
	return a>b;
}
int main(){
	cin>>n>>k;
	vi v;
    fo(i,1,n){
    	int x;
    	cin>>x;
    	v.pb(x);
	}
	sort(all(v),temp);
	int sum=0,mult=0;
	fo(i,0,n-1){
		if(i%k==0)mult++;
		sum+=v[i]*mult;
		
		//cout<<sum<<endl;
	}
	
}
