
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
	if(n<= 90 ){
		cout<<0<<" No punishment";
	}else if(n<=110){
		cout<<(n-90)*300<<" Warning";
	}else{
		cout<<(n-90)*500<<" License removed";
	}
	
	
}
