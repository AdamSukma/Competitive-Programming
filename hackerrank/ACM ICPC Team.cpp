
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
vector < vector<int> > arr;
vector<int> v(n);

int main(){
	printf("hello");
   	cin >> n>>m;
   	char s[n+1][m+1];
   	int sum[1000];
   	fo(i,1,n)cin>>s[i];
   	//fo(i,1,n-1)cout<<s[i]<<endl;
	fo(i,1,n){
		fo(j,i+1,n-1){
			vector <char> a;
			
			fo(k,1,m){
				if(s[i][k]=='1' || s[j][k]=='1')a.pb('1');
				else a.pb('0');
			}
			//cout<<a.<<" "<<i<<" "<<j<<endl;
		}
	}
	
}
