#include<bits/stdc++.h>
using namespace std;
bool k[10000];
int main(){
	int n,m,a=1,hasil;
	for(int i=1;i<=1000;i++)k[i]=1;
	cin>>n>>m;
	while(m*a<=1000){
		k[m*a]=0;
		a++;
	}
	for(int i=1;i<=1000;i++){
		if(k[i])n--;
		if(n==0){
		hasil=i;
		break;	
		}
		
	}
	cout<<hasil<<endl;
	
}
