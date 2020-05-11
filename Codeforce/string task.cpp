#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	
	for(int i=0;i<a.size();i++)a[i]=tolower(a[i]);
	for(int i=0;i<a.size();i++){
		if(a[i]!='a' && a[i]!='i' && a[i]!='u' && a[i]!='e' && a[i]!='o' && a[i]!='y'){
			b.insert(b.size(),".");
			b+=a[i];
			
		}
		
	}
	if(b.size()<1)cout<<endl;
	else
	cout<<b<<endl;
	
}
