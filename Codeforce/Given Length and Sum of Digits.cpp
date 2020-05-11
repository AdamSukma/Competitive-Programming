#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,nol=0;
	cin>>n>>t;
	if((t==0 && n!=1) || t>n*9)cout<<-1<<" "<<-1;
	else{
	
	string max="",min="";
	for(int i=1;i<=t/9;i++)max+='9';
	if(t%9!=0)max+=t%9+48;
	while(max.size()<n){
		nol++;
		max+='0';
}
	//0=48
	for(int i=max.size()-1;i>=0;i--)min+=max[i];
	if(min[0]=='0'){
		if(n!=1 && t!=0)min[0]='1';
		min[nol]-=1;
	}
	cout<<min<<" "<<max;
	
}
}
