#include<bits/stdc++.h>
using namespace std;
int arr[1000000],a[1000000],b[100000];

int binary(int x,int n){
	int l=1,r=n,m;
	bool temu=false;
	while(l<=r && !temu){
		m=(l+r)/2;
		if(x==arr[r])return r;
		
		if(x<arr[m])r=m-1;
		else l=m+1;
		
	}
	//cout<<m<<' '<<l<<' '<<r<<endl;
	return r;
	
}

int main(){
	int n,r,l=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)a[i]=arr[i];
	sort(arr+1,arr+n+1);
	int beda=0;
	for(int i=1;i<=n;i++){
		if(arr[i]!=a[i]){
			l=i;
			r=binary(a[i],n);
		//	cout<<arr[i]<<" "<<a[i]<<endl;
			break;
			
		}
		
	}
	bool cek=1;
	int temp;
	//for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
	//	cout<<endl<<l<<" "<<r<<endl;
	/*

	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	for(int i=0;i<=(r-l)/2;i++){
		temp=a[l+i];
		a[l+i]=a[r-i];
		a[r-i]=temp;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";*/
	
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1])cek=0;
	}
	if(cek==1){
		cout<<"yes"<<endl<<1<<" "<<1;
	}else{
		//	for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
		//	cout<<endl;
		for(int i=0;i<=(r-l)/2;i++){
		temp=a[l+i];
		a[l+i]=a[r-i];
		a[r-i]=temp;
	}
	cek=1;
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1])cek=0;
	}
	if(cek==1)
		cout<<"yes"<<endl<<l<<" "<<r;
		else cout<<"no";
	}
	//cout<<"yes"<<endl<<l<<" "<<r;
	
}
