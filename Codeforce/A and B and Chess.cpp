#include<bits/stdc++.h>
using namespace std;

string s[10];

int main(){
	for(int i=1;i<=8;i++)cin>>s[i];
	int sum1=0,sum2=0;
	for(int i=1;i<=8;i++){
		for(int j=0;j<8;j++){
			if(s[i][j]=='Q')sum1+=9;
			if(s[i][j]=='R')sum1+=5;
			if(s[i][j]=='B')sum1+=3;
			if(s[i][j]=='P')sum1+=1;
			if(s[i][j]=='N')sum1+=3;
			
			if(s[i][j]=='q')sum2+=9;
			if(s[i][j]=='r')sum2+=5;
			if(s[i][j]=='b')sum2+=3;
			if(s[i][j]=='p')sum2+=1;
			if(s[i][j]=='n')sum2+=3;
			
		}
	}
	//cout<<sum1<<sum2;
	if(sum1==sum2)cout<<"Draw";
	else if(sum1>sum2)cout<<"White";
	else cout<<"Black";
}
