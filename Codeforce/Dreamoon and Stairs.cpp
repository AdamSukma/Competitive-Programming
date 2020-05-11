#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m,x,y,hasil=0;
	cin>>n>>m;
	if(n%2==0)x=n/2;
	else x=(n/2)+1;
	y=n;
	for(int i=x;i<=y;i++){
		if(i%m==0){
			hasil=i;
			break;
		}
	}
	if(hasil>0)
	cout<<hasil;
	else cout<<-1;
}
