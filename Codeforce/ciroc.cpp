#include<iostream>
using namespace std;
int arr[1000000];
int binser(int x,int n){
	int l=1,r=n,a=0;
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		a++;
		//cout<<arr[mid]<<' '<<x<<endl;
		if(arr[mid]==x)return a;
		
		 if(x<arr[mid])r=mid-1;
		else l=mid+1;
		
	}
	return 0;
	
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	int max=0;
	for(int i=1;i<=n;i++)
	{
		int x=binser(arr[i],n);
	if(x>max)max=x;
}

	cout<<max<<endl;
	
}


