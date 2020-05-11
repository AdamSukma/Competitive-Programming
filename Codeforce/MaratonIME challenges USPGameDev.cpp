#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int r=(a*a)+(b*b);
	int w=(c*c)+(d*d);
	if(r==w)cout<<"Empate";
	else if (r<w)cout<<"Russo";
	else cout<<"Wil";
}
