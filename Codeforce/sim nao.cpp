#include <iostream>
using namespace std;
#define LL long long
LL fpb(LL x,LL y){
	if(y==0)return x;
	else return fpb(y,x % y);
}

int main(){
	LL t,a,b;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a>>b;
		if(fpb(a,b)>1)cout<<"Sim"<<endl;
		else cout<<"Nao"<<endl;
		//cout<<fpb(a,b)<<endl;
	}
	
	
	
}
