
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

int main(){
	int kasus=1;
	while(cin>>n>>m,n||m){
		string s[n+10];
		char arr[n+10][m+10];
		rep(i,0,n-1){
			rep(j,0,m-1){
				arr[i][j]='0';
			}
		}
		rep(i,0,n-1)cin>>s[i];
		rep(i,0,n-1){
			rep(j,0,m-1){
				if(s[i][j]=='*'){
					if(i-1>=0 &&j-1>=0)arr[i-1][j-1]+=1;
					if(i>=0 &&j-1>=0)arr[i][j-1]+=1;
					if(i-1>=0 &&j>=0)arr[i-1][j]+=1;
					if(i+1<=n &&j-1>=0)arr[i+1][j-1]+=1;
					if(i-1>=0 &&j+1<=m)arr[i-1][j+1]+=1;
					if(i+1<=n &&j+1<=m)arr[i+1][j+1]+=1;
					if(i>=0 &&j+1<=m)arr[i][j+1]+=1;
					if(i+1<=n &&j>=0)arr[i+1][j]+=1;
				}
			}
		}
		if(kasus>1)printf("\n");
		printf("Field #%d:\n",kasus);
		kasus++;
		rep(i,0,n-1){
			rep(j,0,m-1){
				if(s[i][j]=='*'){
					printf("*");
				}else{
					printf("%c",arr[i][j]);
				}
			}
			printf("\n");
		}
		
	}
}
