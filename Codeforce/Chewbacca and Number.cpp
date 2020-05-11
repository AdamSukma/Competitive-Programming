#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(i!=0 || s[i]!='9')s[i]=min((int)s[i]-48,(int)'9'-(int)s[i])+48;
		
	}
	cout<<s;
	//0=48
}
