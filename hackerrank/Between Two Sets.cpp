#include<bits/stdc++.h>
using namespace std;

int a[1000],b[1000];
int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+1+n);
	int sum=0;
	for(int i=1;i<=100;i++){
		int cek1=0;
		int cek2=0;
		for(int j=1;j<=n;j++){
			if(i%a[j]==0)cek1+=1;
			;
		}
		for(int j=1;j<=m;j++){
			if(b[j]%i==0)cek2+=1;
			
			//cout<<"b: "<<b[j]<<"  i: "<<i<<"  cek : "<<cek2 <<endl;;
			
		}
		//cout<<"i : "<<i<<"  cek1 :"<<cek1<<" cek2:"<<cek2<<endl; 
		if(cek1==n && cek2==m){
			sum++;
		//	cout<<i<<endl;
		}
	}
	cout<<sum;
}
