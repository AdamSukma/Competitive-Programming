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
		
		cout<<"RIGHT"<<endl;
	}else if(x<a){
		cout<<"LEFT"<<endl;
	}else
	if(y>b){
		cout<<"DOWN"<<endl;
	}else{
		cout<<"UP"<<endl;
	}
	
}
