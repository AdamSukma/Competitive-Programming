#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	string n;
	cin>>t;
	for(int i=1;i<=t;i++){
		//0==48
		cin>>n;
		int hasil=0;
		int angka=0;
		for(int j=n.size()-1;j>=0;j--){
			int temp=(int)n[j]-48;
			for(int k=j;k<n.size()-1;k++)temp*=10;
			angka+=temp;
			
		}
		for(int j=0;j<n.size();j++){
			if((int)n[j]-48!=0)
			if(angka%((int)n[j]-48)==0)hasil++;
		}
		cout<<hasil<<endl;
			
		
	}
	
}
