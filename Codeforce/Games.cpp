#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j && a[i]==b[j])sum++;
		}
	}
	cout<<sum<<endl;
}
