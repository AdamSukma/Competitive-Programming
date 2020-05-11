
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n>>m>>k;
	int arr[n+1];
	fo(i,1,n)arr[i]=0;
	fo(i,1,m){
		int x,y;
		cin>>x>>y;
		arr[x]++;
		arr[y]++;
		int sum=0;
		fo(j,1,n){
			if(arr[j]>=k)sum++;
			cout<<arr[j]<<" ";
		}
		cout<<endl<<sum<<endl;
	}
	
	
}
