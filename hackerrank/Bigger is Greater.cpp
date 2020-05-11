#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	cin>>n;
	string s;
	fo(i,1,n){
		cin>>s;
		string a=s;
		next_permutation(s.begin(),s.end());
		if(lexicographical_compare(a.begin(),a.end(),s.begin(),s.end()))cout<<s<<endl;
		else cout<<"no answer"<<endl;
	}
}
