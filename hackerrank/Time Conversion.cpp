#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	//0 48
	
	
		int a=(int)s[0]-48;
		int b=(int)s[1]-48;
		int jam=((a*10)+b)%12;
		if(s[8]=='P')jam+=12;
		s.erase(8,9);
		if(jam>=20)s[0]=50;
		else if(jam>=10)s[0]=49;
		else s[0]=48;
		s[1]=(jam%10)+48;
	cout<<s;
}
