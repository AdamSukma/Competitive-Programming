
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m,c,t;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	//cout<<"hello world";
	cin>>t;
	fo(k,1,t){
		cin>>n>>c>>m;
		int sum=n/c;
		int sisa=n/c;
		while(sisa>=m){
			int temp=sisa%m;
			sum+=sisa/m;
			sisa=(sisa/m)+temp;
			
		}
		cout<<sum<<endl;
	}
	
}
