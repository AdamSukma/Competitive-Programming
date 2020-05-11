#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
string a[4000],b[4000],lecture[4000];
int arr[4000];
int main(){
	int n,m;
	cin>>m>>n;
	fo(n)cin>>a[i]>>b[i];
	fo(m)cin>>lecture[i];
	fo(n){
		if(a[i].size()>b[i].size())arr[i]=2;
		else arr[i]=1;
		//cout<<arr[i]<<endl;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(lecture[i]==a[j]){
				if(arr[j]==1)cout<<a[j]<<" ";
				else cout<<b[j]<<" ";
			}
		}
	}
}
