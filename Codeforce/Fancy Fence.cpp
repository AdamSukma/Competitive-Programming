#include<bits/stdc++.h>
using namespace std;

int main(){
	float n,t,bener=0,cek=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		bener=0;
		int min=99999;
		for(float i=1;i<=1000000;i++){
			cek=(i-2)*(180/i);
			if(cek==t)bener=1;
			if(min>cek && cek>0)min=cek;
			//cout<<cek<<" ";
		}
		//cout<<min;
		if(bener==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
