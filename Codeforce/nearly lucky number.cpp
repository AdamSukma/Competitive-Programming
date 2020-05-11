#include<bits/stdc++.h>

using namespace std;

int arr[]={7,4,74,47,744,447,474,774,747,477,777,444};
int main(){
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='4')sum++;
		if(s[i]=='7')sum++;
	}
//	cout<<sum;
	if(( sum==4 || sum ==7 ) && sum!=0 )cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	
	
	
	
}
