#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,level;
	cin>>n;
	for(int i=1;i<=1000;i++){
		if(n<  i *( i + 1 ) *( i + 2 )/6)break;
		level=i;
	}
	cout<<level;
}
