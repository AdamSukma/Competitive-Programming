#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		int sum=(a+b)/2;
		if(a==sum || b==sum)cout<<"Ok"<<endl;
		else{
			if((a+b)%2==0)cout<<sum<<" "<<sum<<endl;
			else cout<<sum<<" "<<sum+1<<endl;
		}
	}
}
