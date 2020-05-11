#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,x,y,z;
	cin>>a>>b>>c;
	x=abs(a-b)+abs(a-c);
	y=abs(b-a)+abs(b-c);
	z=abs(c-b)+abs(a-c);
	int hasil=min(x,y);
	hasil=min(hasil,z);
	cout<<hasil<<endl;
}
