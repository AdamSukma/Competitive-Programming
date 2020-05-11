#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int arr[10000000];

int main(){
	string s;
	int p=0;
	cin>>s;
	s+='A';
	for(int i=0;i<s.size();i++){
		if(s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='U' || s[i]=='O' || s[i]=='Y'){
			p++;
			arr[p]=i+1;
		}
	}
	arr[0]=0;
	//for(int i=0;i<=p;i++)cout<<arr[i]<<" ";
	//cout<<endl;
	int maks=1;
	for(int i=0;i<p;i++){
		maks=max(maks,arr[i+1]-arr[i]);
	}
	cout<<maks;
	
	
	
}
