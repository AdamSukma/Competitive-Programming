#include<bits/stdc++.h>

using namespace std;
int fpb(int a,int b){
	if(b==0) return a;
	else{
		
		return fpb(b,a % b);
	}
}
int kpk(int a,int b){
	return a/fpb(a,b)*b;
}
int main(){
	long long x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	if(v1>v2){
		swap(v1,v2);
		swap(x1,x2);
	}    
	bool cek=0;
	while(x1>=x2){
		if(x1==x2){
			cek=1;
			break;
		}
		x1+=v1;
		x2+=v2;
	}
	if(cek==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
