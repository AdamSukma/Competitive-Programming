#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	string s1,s2;
	cin>>s1>>s2>>n;
	int sama=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==s2[i])sama++;
		else break;
	}
	//cout<<sama;
	int itung =s1.size()+s2.size()-sama-sama;
	//cout<<itung<<endl;
	if(itung==n)cout<<"Yes";
    else if(n-itung>0 && (n-itung)%2==0 )cout<<"Yes";
	else{
		if(s1.size()==sama ){
			itung+=sama*2;
			if(itung<n)cout<<"Yes";
			else cout<<"No";
		}else if(n>=s1.size()+s2.size())cout<<"Yes";
		
		else cout<<"No";
		}
		 
		
	
}
