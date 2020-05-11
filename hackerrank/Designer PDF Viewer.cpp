#include<bits/stdc++.h>
using namespace std;


int main(){
	int huruf[30];
	
	//a=97;
	for(int i=1;i<=3;i++)cin>>huruf[i];
	string s;
	cin>>s;
	int max=-1;
	for(int i=0;i<s.size();i++){
		if(max<huruf[(int)s[i]-96])max=	 huruf[(int)s[i]-96];
	}
	cout<<max*s.size();;
}
