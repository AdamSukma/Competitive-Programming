#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[100][100];
	
	int n,m;
	for(int i=0;i<=10;i++){
		for(int j=0;j<=10;j++)s[i][j]=0;
	}
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>s[i];
	bool row[1000],column[1000];
	for(int i=0;i<=1000;i++){
		row[i]=1;column[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			//cout<<s[i][j];
			if(s[i][j]=='S'){
			
			row[i]=0;
			column[j]=0;
		}
		}
		
	
	}
	
		int k=0,l=0;
		for(int i=0;i<n;i++){
			//cout<<row[i]<<" ";
			if(row[i]==1)k++;
		}
		//cout<<endl;
		for(int i=0;i<m;i++){
			if(column[i]==1)l++;
			//cout<<column[i]<<" ";
		}
		//cout<<endl;
		int sum=(n*l)+((m-l)*k);
		cout<<sum;
	
}
