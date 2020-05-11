#include<bits/stdc++.h>
using namespace std;
char huruf[100];

int main(){
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		huruf[(int)s[i]-(int)'a'+1]++;
	}
	for(int i=1;i<=26;i++)
	if(huruf[i]!=0)sum++;
	if(sum%2==0) cout<<"CHAT WITH HER!"<<endl;
	else cout<<"IGNORE HIM!"<<endl;
	
}
