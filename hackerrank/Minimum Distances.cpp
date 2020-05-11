
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);
int arr[1007];
int main(){
   	cin >> n;
   	fo(i,1,n)cin>>arr[i];
   	int min=99999;
	fo(i,1,n){
		fo(j,i+1,n){
			int x;
			if(arr[i]==arr[j]){
				x=abs(i-j);
				if(x<min)min=x;
			}	
		}
	}
	if(min==99999)cout<<-1;
	else
	cout<<min;
}
