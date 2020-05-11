
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m,t;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	cin >> t;
	fo(k,1,t){
		cin>>n;
		int arr[n+2];
		arr[n+1]=n+99;
		int sum=0;
		bool cek=true;
		fo(i,1,n)cin>>arr[i];
		fo(i,1,n){
			if(arr[i]-i>2){
				cek=false;
				break;
			}
			else{
				if(arr[i]>i  )sum+=abs(arr[i]-i);
				else if(arr[i]>arr[i+1])sum+=arr[i]-arr[i+1];
			}
			
			cout<<sum<<" "<<arr[i]<<" "<<i<<endl;
		}
		if(cek==true)cout<<sum<<endl;
		else cout<<"Too chaotic"<<endl;
	}
}
	

