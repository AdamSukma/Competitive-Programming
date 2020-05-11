
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
	string s;
	string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
     map<char,char> M;
    
    for(int i=0;i<s1.size();i++) M[s1[i]]=s2[i];
	while(cin>>s){
		bool reg=1,mir=1;
		rep(i,0,(s.size()-1) / 2){
			if(s[i]!=s[s.size()-1-i])reg=0;
			if(s[i]!=M[s[s.size()-1-i]])mir=0;
		}
		
		cout<<s;
		if(reg==0 && mir==0)cout<<" -- is not a palindrome."<<endl<<endl;
		if(reg==1 && mir==0)cout<<" -- is a regular palindrome."<<endl<<endl;
		if(reg==0 && mir==1)cout<<" -- is a mirrored string."<<endl<<endl;
		if(reg==1 && mir==1)cout<<" -- is a mirrored palindrome."<<endl<<endl;
	}
}
