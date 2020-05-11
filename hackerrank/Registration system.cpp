#include<bits/stdc++.h>
using namespace std;

struct titik{
	int sum=0;
	string a;
	titik *nxt;
};

int hash1(string x){
	long long hashcode=0;
	for(int i=0;i<x.size();i++){
		if(i%4==0){
		hashcode+=x[i]*17;
		hashcode*=3;	
		}else if(i%4==1){
			hashcode-=x[i]*13;
			hashcode*=hashcode/2;
		}else if(i%4==2){
			hashcode+=(x[i]%96)*291;
		}else{
			hashcode-=x[i]*4;
			hashcode*=2;
		}
	}
	hashcode=(abs(hashcode))%100000;
	return hashcode;
	
	
}

int main(){
	int n;
	cin>>n;
	string s[n+1];
	int arr[100002];
	for(int i=1;i<=n;i++)cin>>s[i];
	for(int i=1;i<=n;i++){
		int index=hash1(s[i]);
		if(arr[index]==0){
			cout<<"OK"<<endl;
			arr[index]++;
		}else {
			cout<<s[i]<<arr[index]<<endl;
			arr[index]++;
		}
	}
	
	
}
