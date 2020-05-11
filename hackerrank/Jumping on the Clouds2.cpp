
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
int arr[1000];

int main(){
   	cin >> n;
	//vector<int> v(n);
	fo(i,1,n){
		cin>>arr[i];
	}
	int p=1,sum=0;
	while(p!=n){
		if((arr[p+2]==0) && (p+2<=n)){
			p+=2;
			sum++;
		}else{
			p++;
			sum++;
		}
	}
	cout<<sum;
}
