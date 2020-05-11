#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n;


int main(){
	cin>>n;
	unsigned char s[n];
	cin>>s;
	cin>>k;
	k%=26;
	//97-122
	//65-90
	
	//cout<<(int)'a'<<" "<<(int)'z'<<" "<<(int)'A'<<" "<<(int)'Z';
	fo(i,0,n){
		if(s[i]>=97 && s[i]<=122){
            s[i]+=k;
            if(s[i]>122)s[i]-=26;
        }
		else if(s[i]>=65 && s[i]<=90){
            s[i]+=k;
		
		 if(s[i]>90)s[i]-=26;
        }
	}
	cout<<s;
    //fo(i,0,n)cout<<(int)s[i]<<" ";
}
