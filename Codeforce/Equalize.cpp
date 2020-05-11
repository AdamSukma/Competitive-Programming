
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
	cin>>n;
	string a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			if(a[i+1]!=b[i+1] and a[i]!=a[i+1]){
				sum+=1;
				a[i]=b[i];
				a[i+1]=b[i+1];
			}else{
				sum+=1;
			}
		}
	}
	cout<<sum;
	
}
