#include<iostream>
#include<algorithm>

using namespace std;
int arr[100000];
int main(){
	int n,sum;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	sort(arr+1,arr+n+1);
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		
		if(arr[i]==arr[i-1]){
			arr[i]++;
			sum++;
		}	
		while(arr[i]<=arr[i-1]){
			sum++;
			//cout<<'a';
		arr[i]++;
	}
	}
	
	}
	cout<<sum-1<<endl;
	
	
}
