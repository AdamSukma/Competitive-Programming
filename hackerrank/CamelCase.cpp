#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	char s[1000000];
	cin>>s;
	int hasil=1;
	fo(i,0,strlen(s)-1){
		if(isupper(s[i]))hasil++;
	}
	cout<<hasil;
}
