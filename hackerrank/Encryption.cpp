
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	string s;
   	cin >> s;
   	float p=s.size();
   	float a=floor(sqrt(p));
	float b=ceil(sqrt(p));
	//cout<<a<<" "<<b<<" "<<p;
	for(int i=0;i<b;i++){
		for(int j=i;j<p;j+=b){
			cout<<s[j];
		}
		cout<<" ";
	}
}
