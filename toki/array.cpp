
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	scanf("%d",&n);
	int sum[1001];
	for(i=1;i<=1000;i++)sum[i]=0;
	int arr[n+1];
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		sum[arr[i]]++;
	}
	int max = sum[0];
	int p;
	for(i=1;i<=1000;i++){
		if(max<=sum[i]){
			max= sum[i];
			p=i;
		}
	}
	printf("%d\n",p);
}
