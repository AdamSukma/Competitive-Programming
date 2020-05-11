#include<bits/stdc++.h>
using namespace std ;

int main(){
	long long t,sweet,awal,n;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n>>sweet>>awal;
		int hasil=0;
		awal+=sweet-1;
		cout<<awal%n<<endl;
	}
	
}
