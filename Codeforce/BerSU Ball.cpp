#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
int a[1000],b[1000],sum=0;
bool ka[10000],kb[10000];
int main(){
	int n,m;
	cin>>n;
	fo(n)cin>>a[i];
	cin>>m;
	fo(m)cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
//	fo(n)cout<<a[i]<<" ";
//	cout<<endl;
	//fo(m)cout<<b[i]<<" ";
//	cout<<endl;
	memset(ka,1,n+10);
	memset(kb,1,m+10);
	a[0]=0;
	b[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			if((a[i]==b[j] || a[i]==b[j]-1 || a[i]==b[j]+1) && ka[i]==1 && kb[j]==1){
				ka[i]=0;
				kb[j]=0;
				//cout<<i<<" "<<j<<endl;
				sum++;
				break;
			}
		}
	}
	cout<<sum;
	
}
