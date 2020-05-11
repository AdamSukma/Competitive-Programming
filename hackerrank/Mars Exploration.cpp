
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
	string s;
	cin>>s;
	int sum=0;
	fo(i,0,s.size()-1){
		if(i%3==0 && s[i]!='S')sum++;
		else if(i%3==1 && s[i]!='O')sum++;
		else if(i%3==2 && s[i]!='S')sum++;
	
	}
	cout<<sum;
}
