#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a,b,m;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>m;
		if(abs(m-a)==abs(m-b))cout<<"Mouse C"<<endl;
		else if(abs(m-a)>abs(m-b))cout<<"Cat B"<<endl;
		else cout<<"Cat A"<<endl;
	}
	
}
