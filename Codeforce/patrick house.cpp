#include<bits/stdc++.h>
using namespace std;

int main(){
	int d1,d2,d3,hasil=0;
	cin>>d1>>d2>>d3;
	hasil=min(d1+d2+d3,2*(d1+d2));
	hasil=min(hasil,2*(d1+d3));
	hasil=min(hasil,2*(d2+d3));
	cout<<hasil;
}
