
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

string palin(string s){
	if(s.size()==0){
		return "YA\n";
	}else if(s[0]==s[s.size()-1]){
		return palin(s.substr(1,s.size()-2));
		
	}else{
		
		return "BUKAN\n";
	}
}

int main(){
	string s;
	cin>>s;

	cout<<palin(s);
}
