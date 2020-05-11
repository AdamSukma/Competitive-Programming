#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sisa,hasil=0,m,dapet=0,temp,sum=0;
	cin>>n>>m;
	sisa=n;
	dapet=1;temp=1;
	while(sisa>=m){
		temp=sisa%m;
		hasil=sisa-temp;
		dapet=hasil/m;
		sisa=dapet+temp;
		sum+=hasil;
		//cout<<sum<<' '<<hasil<<' '<<dapet<<' '<<temp<<' '<<sisa<<endl;
	}
	sum+=sisa;
	cout<<sum<<endl;
}
