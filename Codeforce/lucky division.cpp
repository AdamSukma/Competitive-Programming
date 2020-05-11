#include<bits/stdc++.h>

using namespace std;

int arr[]={7,4,74,47,744,447,474,774,747,477,777,444};


int main(){
	int x;
	cin>>x;
	bool bener=0;
	for(int i=0;i<12;i++){
		if(x%arr[i]==0)bener=1;
	}
	if(bener)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
