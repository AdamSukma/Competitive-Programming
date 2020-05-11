#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,jawab;
	cin>>n;
	jawab=(n/2);
	if(n%2==1)jawab=(jawab+1)*-1;
	cout<<jawab;
} 
