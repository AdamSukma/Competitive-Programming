#include<bits/stdc++.h>
using namespace std;
int arr[100000];

int main(){
	int n;float sum=0;
	float hasil;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)sum+=arr[i];
	cout<<setprecision(5)<<fixed;
	hasil=sum/n;
	cout<<hasil<<endl;
}
