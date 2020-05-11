#include<bits/stdc++.h>
using namespace std;
int s[1000000],h[1000000];
int main(){
	int n,t,es=0,ha=0;
	bool cek=1;
	cin>>n>>t;
	char line;
	int x;
	for(int i=1;i<=t;i++){
		cin>>x>>line;
		if(line=='M')cek=0;
		else if(line=='S'){
			es++;
			s[es]=x;
		}else{
			ha++;
			h[ha]=x;
		}
		
	}
	sort(s+1,s+es+1);
	sort(h+1,h+ha+1);
//	for(int i=1;i<=es;i++)cout<<s[i]<<" ";
//	cout<<endl;
//	for(int i=1;i<=ha;i++)cout<<h[i]<<" ";
	for(int i=1;i<=es;i++){
		for(int j=1;j<=ha;j++){
			if(abs(s[i]-h[j])<4)cek=0;
		}
	}
	bool a=0,b=0;
	/*for(int i=1;i<es;i++){
		if(abs(s[i]-s[i+1])>4)a=1;
	}*/
	for(int i=1;i<ha;i++){
		if(abs(h[i]-h[i+1])>4)b=1;
	}
	if(cek==1 && b==1 )cout<<"YES";
	else cout<<"NO";
}
