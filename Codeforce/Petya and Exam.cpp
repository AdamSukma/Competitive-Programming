#include<bits/stdc++.h>
using namespace std;

string a,b,s[1000000];
int h[10000000],t[10000000],q[1000000];
int main(){
	int n,p1=0,p2=0,p3=0;
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++)cin>>s[i];
	for(int i=0;i<b.size();i++){
		if(b[i]=='?'){
				p1++;
			t[p1]=i;
		
		}else if(b[i]=='*'){
			p2++;
			q[p2]=i;
			
		}else{
			p3++;
			h[p3]=i;
			
	}
}
/*
	for(int i=1;i<=p1;i++)cout<<t[i]<<" ";
	cout<<endl;
	for(int i=1;i<=p2;i++)cout<<q[i]<<" ";
	cout<<endl;*/
	//for(int i=1;i<=p3;i++)cout<<h[i]<<" ";
	//cout<<endl;
	
	int bener=1,cek=0;
	for(int i=1;i<=n;i++){
		bener=1;
		if(s[i].size()!=b.size())bener=0;
		for(int j=1;j<=p3;j++){
			if(s[i][h[j]]!=b[h[j]])bener=0;
		}
		/*for(int j=1;j<=p1;j++){
			for(int k=0;k<a.size();k++){
				if(s[i][t[j]]==a[t[j]])cek=1;
			}
			if(cek==0)bener=0;
			cek=0;
		}*/
		
		cout<<bener<<endl;
		bener=1;
	}
}
