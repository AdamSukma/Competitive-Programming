#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,k,m=0,hasil=0;
	cin>>n>>k;
	m=n/2;
	if(n%2==0){
		if(k>m){//genap
			if(k!=n)hasil=(k%m)*2;
			else hasil=n;
		}else hasil=((k)*2)-1;
	}else{
		if(k>m+1){//ganjil m=3
		//cout<<k<<" "<<m<<endl;
			if(k!=n)hasil=((k-1)%m)*2;
			else hasil=(m)*2;
			
		}else hasil=((k)*2)-1;
	}
	cout<<hasil;
}
