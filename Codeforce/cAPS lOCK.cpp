#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int sum;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))sum++;
		
		
		
	}
	if((islower(s[0]) && sum==s.size()-1) || sum==s.size() ) {
		//cout<<sum<<endl;
		if(islower(s[0]))s[0]=toupper(s[0]);
		else s[0]=tolower(s[0]);
		for(int i=1;i<s.size();i++)s[i]=tolower(s[i]);
	}
	cout<<s<<endl;
	
	
}
