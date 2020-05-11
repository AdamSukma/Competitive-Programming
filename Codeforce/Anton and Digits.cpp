#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	long long dua,tiga,empat,lima,enam,sisad,mini,td;
	cin>>dua>>tiga>>lima>>enam;
	mini=min(dua,lima);
	mini=min(mini,enam);
	sisad=dua-mini;
	td=min(sisad,tiga);
	cout<<(mini*256)+(td*32);
}
