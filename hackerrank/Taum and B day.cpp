#include<bits/stdc++.h>
using namespace std;

int main(){
	int t=9;
	cin>>t;
	for(int i=1;i<=t;i++){
		int b=0,w=0,bc=0,wc=0,z=0;
		cin>>b>>w;
		cin>>bc>>wc>>z;
		int cost=0;
		cost+=min(b*bc,b*(wc+z));
		cost+=min(w*wc,w*(bc+z));
		cout<<cost<<endl;
	}
	
}
