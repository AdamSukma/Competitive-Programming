#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,x=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(a==b){
			x++;y++;
		}else if(a>b)x++;
		else if(b>a)y++;
	}
	//cout<<a<<"  "<<b<<endl;
	if(x==y)cout<<"Friendship is magic!^^";
	else if(x>y)cout<<"Mishka";
	else if(x<y)cout<<"Chris";
}
