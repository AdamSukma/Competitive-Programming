#include<bits/stdc++.h>
using namespace std;
int arr[100000],index[100000];

int x1[100000];
bool cek[100000];

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)x1[i]=arr[i];
	for(int i=1;i<=n;i++)cek[i]=1;
	sort(arr+1,arr+n+1);
	int sum=0;
	for(int i=1;i<=n;i++){
		if(k>=0){
			sum++;
			k-=arr[i];
		//	cout<<arr[i]<<" "<<x1[0]<<endl;
			for(int j=1;j<=n;j++){
				if(arr[i]==x1[j] && cek[j]==1){
					index[sum]=j;cek[j]=0;break;
				}
			}
			if(k<0){
				sum--;
				break;
			}
			
		}else break;
	}
	cout<<sum<<endl;
	for(int i=1;i<=sum;i++)cout<<index[i]<<" ";
}
