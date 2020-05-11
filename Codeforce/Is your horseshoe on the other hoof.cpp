#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL arr[10];

int main(){
	for(int i=1;i<=4;i++)cin>>arr[i];
	sort(arr+1,arr+5);
//	for(int i=1;i<=4;i++)cout<<arr[i];
	int hasil=0;
	for(int i=1;i<=3;i++){
		if(arr[i]==arr[i+1])hasil++;
		//cout<<arr[i]<<"  "<<arr[i+1]<<endl;
	}
	cout<<hasil;
}
