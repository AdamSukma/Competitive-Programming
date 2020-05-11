#include<bits/stdc++.h>
using namespace std;

int dua[]={0,11,12,12,12,15,12,14,16,18,20};
//840
int main(){
	int n,t;
	cin>>n>>t;
	if(n==1 && t!=10)cout<<t<<endl;
	else if(n==1 && t==10)cout<<-1;
	else if(n==2)cout<<dua[t]<<endl;
	else if(n>=3 && t!=9){
		cout<<840;
		for(int i=1;i<=n-3;i++){
			cout<<'0';
		}
	}
	else{
		for(int i=1;i<=n;i++)cout<<9;
	}
}

