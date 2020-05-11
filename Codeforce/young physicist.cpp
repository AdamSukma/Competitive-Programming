#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,c,sa=0,sb=0,sc=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
		sa+=a;
		sb+=b;
		sc+=c;
	}
	//cout<<sa<<' '<<sb<<' '<<sc;
	if(sa==0 && sb==0 && sc ==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
