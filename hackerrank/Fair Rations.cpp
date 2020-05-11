
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	cin >> n;
	int arr[n+1];
	fo(i,1,n)cin>>arr[i];
	int sum=0;
	fo(i,1,n)sum+=arr[i];
	if(sum%2==1)cout<<"NO";
	else {
		int tot=0;
		fo(i,1,n){
			if(arr[i]%2==1){
				arr[i]+=1;
				arr[i+1]+=1;
				tot+=2;
			}
			
		}
		cout<<tot;
		
	}
	
}
