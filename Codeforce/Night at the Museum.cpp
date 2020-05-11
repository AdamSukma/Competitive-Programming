#include<bits/stdc++.h>
using namespace std;

int main(){
	//a=97, z=122
	string s;
	cin>>s;
	//cout<<(int)s[0];
	int sum=0;
	int p=1;
	for(int i=0;i<s.size();i++){
		int a=((int)s[i])-96;
		int m=min(abs(p-a),abs(p-a+26));
		m=min(m,abs(a-p+26));
		sum+=m;
		
		
		//cout<<a<<" "<<p<<" "<<abs(p-a)<<" "<<abs(p-a+26)<<" "<<abs(a-p+26)<<endl;	
		p=a;
	}
	cout<<sum;
}
