#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int n,sum=0;
	bool itung=0;
	memset(arr,0,1000);
	string s;
	cin>>n>>s;
	for(int i=0;i<s.size();i++){
		if(itung==0){
			if(s[i]=='B'){
				sum++;
				itung=1;
				arr[sum]=1;
			}
		}else{
			if(s[i]=='B'){
				arr[sum]++;
			}else{
				itung=0;
			}
		} 
	}
	cout<<sum<<endl;
	fo(sum)cout<<arr[i]<<" ";
	
}
