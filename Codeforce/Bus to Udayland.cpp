#include<bits/stdc++.h>
using namespace std;

string s[10000000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>s[i];
	int cek=0;
	for(int i=1;i<=n;i++){
		if(s[i][0] =='O' && s[i][1] =='O'){
			cek=1;
			s[i][0]='+';
			s[i][1]='+';
			break;
		}
		if(s[i][3] =='O' && s[i][4] =='O'){
			cek=1;
			s[i][3]='+';
			s[i][4]='+';
			break;
		}
	}
	if(cek==1){
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)cout<<s[i]<<endl;
	}
	else cout<<"NO"<<endl;
	
}
