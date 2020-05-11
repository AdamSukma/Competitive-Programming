#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n,x;
	cin>>n>>x;
	cin>>s;
	for(int i=0;i<x;i++){
		for(int j=0;j<n;j++){
			if(s[j]=='B' && s[j+1]=='G'){
				swap(s[j],s[j+1]);
				//cout<<s<<' '<<j<<endl;
				j++;
			}
			//cout<<'a';
			
			
		}
	}
	cout<<s<<endl;
}
