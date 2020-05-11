
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

int rekursif(int n){
	if(n<=1)return 1;
	else if(n%2==0)return (n/2)*rekursif(n-1);
	else return n*rekursif(n-1);
}

int main(){
	cin>>n;
	cout<<rekursif(n)<<endl;
}
