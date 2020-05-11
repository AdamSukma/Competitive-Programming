
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

LL i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	scanf("%d",&n);
	if(n<0 || n>10){
		printf("ditolak\n");
	}else{
		int sum =1;
		for(i=n;i>=1;i--)sum*=i;
		printf("%d\n",sum);
	}
}
