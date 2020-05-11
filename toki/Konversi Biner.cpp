
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

string biner(int x){
	if(x==0){
		return "";
	}else{
		if(x %2 ==0){
			return "0"+biner(x/2);
		}else{
			return "1"+biner(x/2);
		}
	}
}

int main(){
	cin>>n;
	string s=biner(n);
	rep(i,0,s.size()-1)cout<<s[s.size()-i-1];
	cout<<endl;
	
}
