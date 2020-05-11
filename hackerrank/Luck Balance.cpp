
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
bool cmp(int a,int b){
	return a>b;
}
int main(){
	cin>>n>>k;
	vi arr;
	int sum=0;
	fo(i,1,n){
		int a,b;
		cin>>a>>b;
		if(b==1){
			arr.pb(a);
		}else sum+=a;
	}
	sort(all(arr),cmp);
	fo(i,0,k-1)sum+=arr[i];
	fo(i,k,arr.size()-1)sum-=arr[i];
	cout<<sum;
}
