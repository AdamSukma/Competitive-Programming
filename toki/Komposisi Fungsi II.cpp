
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);
int a,b,x;
int f(int x){
	return abs((a*x)+b);
}

int rek(int x,int k){
	if(k==1){
		return f(x);
	}else{
		return rek(f(x),k-1);
	}
}

int main(){
	
	cin>>a>>b>>k>>x;
	cout<<rek(x,k)<<endl;
}
