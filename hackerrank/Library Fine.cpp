#include<bits/stdc++.h>
using namespace std;

int main(){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
	if(y1==y2){
		if(m1==m2){
			if(d1<=d2)cout<<0;
			else cout<<(d1-d2)*15;
		}else if(m1>m2){
			cout<<(m1-m2)*500;
		}else cout<<0;
	}else if(y1>y2) cout<<"10000";
	else cout<<0;
}
