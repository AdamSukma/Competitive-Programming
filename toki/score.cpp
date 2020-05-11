
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
	scanf("%d",&t);
	rep(i,1,t){
		string s;
		cin>>s;
		int sum=0;
		int p=1;
		rep(j,0,s.size()-1){
			if(s[j]=='X'){
				p=1;	
			}else {
				sum+=p;
				p++;	
			}
			//cout<<s[j]<<" "<<p<<" ";
			//cout<<sum<<endl;
		}
		cout<<sum<<endl;
		
		
	}
}
