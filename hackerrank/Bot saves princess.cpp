#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r,c;
	
	cin>>n>>r>>c;
	string s[n+1];
	for(int i=1;i<=n;i++)cin>>s[i];
	int x=0,y=0,a=0,b=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n;j++){
		//	cout<<s[i][j];
			if(s[i][j]=='p'){
				x=j;y=i;
			}
			if(s[i][j]=='m'){
				a=j;b=i;
			}
		}
	//	cout<<endl;
	}
	//cout<<x<<" "<<y<<" "<<a<<" "<<b<<endl;
	if(x>a){
		
		for(int i=a;i<x;i++)cout<<"RIGHT"<<endl;
	}else{
		for(int i=x;i<a;i++)cout<<"LEFT"<<endl;
	}
	if(y>b){
		for(int i=b;i<y;i++)cout<<"DOWN"<<endl;
	}else{
		for(int i=y;i<b;i++)cout<<"UP"<<endl;
	}
	
}
