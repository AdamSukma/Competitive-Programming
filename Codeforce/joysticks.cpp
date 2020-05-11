#include<bits/stdc++.h>
using namespace std;


int main(){
	int a,b;
	cin>>a>>b;
	int sum=0;
	if(a!=1 || b!=1)
	while(a>0 && b>0 ){
		if(a<=2){
			a++;
			b-=2;
		}else if(b<=2){
			b++;
			a-=2;
		}else{
			b++;
			a-=2;	
		}
		sum++;
		
	}
	cout<<sum;
}
