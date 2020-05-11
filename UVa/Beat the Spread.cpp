
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back
int i,j,k,n,m,t;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>t;
	rep(i,1,t){
		int a,b;
		cin>>a>>b;
		if(a>=b && (a+b)%2==0){
			int c=(a+b)/2,d=a-c;
			cout<<c<<" "<<d<<endl;
		}else{
			cout<<"impossible"<<endl;
		}
	}
}
