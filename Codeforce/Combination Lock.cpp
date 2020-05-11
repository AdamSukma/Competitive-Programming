#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y,z,sum=0;
	string a,b;
	cin>>n>>a>>b;
	//0 = 48
	//9=57
	for(int i=0;i<n;i++){
		x=(int)a[i];
		y=(int)b[i];
		z=min(abs(x-y),abs((x+10)-y));
		z=min(z,abs((x-10)-y));
		sum+=z;
	}
	cout<<sum;
}
