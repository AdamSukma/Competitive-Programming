#include<bits/stdc++.h>
using namespace std;

int arr[10000],nol[10000],satu[10000];
int n;
void ubah(int x,int y){
	for(int i=x;i<=y;i++){
		if(arr[i]==1)arr[i]=0;
		else if(arr[i]==0)arr[i]=1;
	}
}
int hitung(){
	int sum=0;
	for (int i=1;i<=n;i++){
		if(arr[i]==1)sum++;
	}
	return sum;
}
int main(){
	
	

	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	nol[0]=0;
	satu[0]=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==1)satu[i]=1;
		if(arr[i]==0)nol[i]=1;
		satu[i]+=satu[i-1];
		nol[i]+=nol[i-1];
		
	}
	int max=0,jumlah=0;
	//max=hitung();
	for(int i=1;i<=n;i++){
		
		for(int j=i;j<=n;j++){
			ubah(i,j);
			//for(int k=1;k<=n;k++)cout<<arr[k]<<"   ";
			//cout<<endl;
			jumlah=hitung();
			if(jumlah>max)max=jumlah;
			ubah(i,j);
			
		}
	}
	
	cout<<max<<endl;
}

