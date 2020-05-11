#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b;
	cin>>a>>b;
	long long sum=0;
	while(a>0 && b>0 && (a!=b)){
		//cout<<a<<" "<<b<<endl;
		if(a>b){
			sum+=a/b;
			a=a % b;	
		}else{
			sum+=b/a;
			b=b%a;
		}
	}
	cout<<sum;
}
