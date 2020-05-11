#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<float> arr(n);
	for(int i=1;i<=n;i++)cin>>arr[i];
	float minus=0,plus=0,nol=0;
	for(int i=1;i<=n;i++){
		if(arr[i]==0)nol++;
		else if(arr[i]<0)minus++;
		else plus++;
	}
	float a=plus/n;
	float b=minus/n;
	float c=nol/n;
	cout<<a<<endl<<b<<endl<<c;
	
	return 0;
}
