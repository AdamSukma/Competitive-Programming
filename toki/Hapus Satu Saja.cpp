#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[10000],b[10000];
	for(int i=0;i<=10000;i++){
		a[i]=0;
		b[i]=0;
	}
	cin>>a>>b;
	bool cek=1;
	int j=0,beda=0;;
	if(strlen(a)==strlen(b)+1){
	for(int i=0;i<strlen(a);i++){
		//cout<<i<<" "<<j<<endl;
		if(a[i]==b[j]){
			j++;
		}else{
			beda++;
		}
	}	
	}else cek=0;
	if(cek==1 && beda==1){
		cout<<"Tentu saja bisa!";
	}else cout<<"Wah, tidak bisa :(";
}
