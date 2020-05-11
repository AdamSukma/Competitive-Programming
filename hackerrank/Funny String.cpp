#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	cin>>n;
	char a[10010],b[10010];
	fo(i,1,n){
		cin>>a;
		fo(j,0,strlen(a)-1){
			b[j]=a[strlen(a)-1-j];
		}
		bool cek=true;
		fo(j,0,strlen(a)-2){
			if(abs(a[j]-a[j+1])!=abs(b[j]-b[j+1]))cek=false;
			
		}
		if(cek)cout<<"Funny"<<endl;
		else cout<<"Not Funny"<<endl;
	//	cout<<a<<" "<<b<<" "<<abs(a[0]-b[0])<<endl;
		
	}
	
}
