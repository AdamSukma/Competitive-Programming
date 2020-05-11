
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m,a;
float neg=0,pos=0,nol=0;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a;
		if(a>0)pos++;
		else if(a<0)neg++;
		else nol++;
	}
	printf("%.6f\n%.6f\n%.6f\n",pos/n,neg/n,nol/n);
}
