
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m;
vector < vector<int> > arr;


int main(){
   cin >> n;
	fo(i,1,n){
		LL a,b,c,d;
		cin>>a>>b;
		c=sqrt(a);
		d=sqrt(b);
		LL sum=0;
		if(a!=b)sum=d-c;
		else{
			
			sum=0;
		}
		if((a<4) || (c*c==a))sum++;
		cout<<sum<<endl;
	}
	
}
