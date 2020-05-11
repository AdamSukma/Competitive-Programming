
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define all(v) v.begin(),v.end()
#define vi vector < int >
#define vs vector < string >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	int t;
	cin>>t;
	fo(k,1,t){
		cin>>n;
		char s[n][100000];
		fo(i,0,n-1){
			cin>>s[i];
			sort(s[i],s[i]+strlen(s[i]));
			//cout<<s[i]<<endl;
		}
		bool cek = true;
		fo(i,0,strlen(s[0])-1){
			fo(j,0,n-2){
				if((int)s[j][i]>(int)s[j+1][i])cek=false;
			}
		}
		if(cek)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
