#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ph=-1,pe=-1,pl=-1,pi=-1,po=-1;
	for(int i=0;i<s.size();i++){
	
		if(s.find('h')<s.size() && ph==-1)
		ph=s.find('h');
		if(s.find('e',ph+1)<s.size() && pe==-1 && ph!=-1)
		pe=s.find('e',ph+1);
		if(s.find('l',pe+1)<s.size() && pl==-1 && pe!=-1)
		pl=s.find('l',pe+1);
		if(s.find('o',pi+1)<s.size() && po==-1 && pi!=-1)
		po=s.find('o',pi+1);
		if(s.find('l',pl+1)<s.size() && pi==-1 && pl!=-1)
		pi=s.find('l',pl+1);
		
		
		
	}
	
	if(ph<pe && pe<pl && pl<pi && pi<po)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	
	
}
