#include<bits/stdc++.h>
using namespace std;

int sum1[100],sum2[100];
int main(){
	//a=97
	//z=122
	string a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<=26;i++){
		sum1[i]=0;
		sum2[i]=0;
	}
	for(int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
	sum1[((int)a[i])-96]+=1;
	
	}
	for(int i=0;i<b.size();i++){
		b[i]=tolower(b[i]);
	sum1[((int)b[i])-96]+=1;
	
	}
	for(int i=0;i<c.size();i++){
		c[i]=tolower(c[i]);
	sum2[((int)c[i])-96]+=1;
	
	}
	//for(int i=1;i<=26;i++)cout<<sum1[i]<<" ";
	//cout<<endl;
	//for(int i=1;i<=26;i++)cout<<sum2[i]<<" ";
	bool bener=1;
	for(int i=1;i<=26;i++){
		if(sum1[i]!=sum2[i])bener=0;
	}
	if(bener==1)cout<<"YES";
	else cout<<"NO";
}
