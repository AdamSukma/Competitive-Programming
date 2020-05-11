
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

void print(int x){
	rep(i,1,x)cout<<"*";
	cout<<endl;
}

void tulis(int x){
	if(x==1)print(x);
	else{
		tulis(x-1);
		print(x);
		tulis(x-1);
	}
}
int main(){
	cin>>n;
	tulis(n);
}
