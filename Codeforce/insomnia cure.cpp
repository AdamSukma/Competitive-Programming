#include<bits/stdc++.h>

using namespace std;

int arr[10000];
bool cek[10000000];

int main(){
	int d,sum;
	memset(cek,0,10000000);
	cin>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>d;
	for(int i=1;i<=4;i++){
		for(int j=arr[i];j<=d;j+=arr[i])cek[j]=1;
		
	}
	for(int i=1;i<=d;i++)
	if(cek[i])sum++;
	cout<<sum-1<<endl;
	
}
