#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
char s[1000000];
char* p;
char a[] = "AB";
char b[] = "BA";
int letak=0;
int sa[1000000],sb[1000000];
int main(){
	cin>>s;
	bool cek=1;
	int k=0,l=0;
	while(letak>=0){
	
	p=strstr(s+letak,a);
	letak=p-s+1;
	k++;
	sa[k]=letak;
	
	
}
letak=0;
while(letak>=0){
	
	p=strstr(s+letak,b);
	letak=p-s+1;
	l++;
	sb[l]=letak;
	
	
}
k--;l--;
for(int i=1;i<=k;i++){
	for(int j=1;j<=l;j++){
		if(sb[j]==sa[k]+1 || sb[j]==sa[k]-1)cek=0;
	}
}
fo(k)cout<<sa[i]<<" ";
cout<<endl;
fo(l)cout<<sb[i]<<" ";
cout<<endl;
cout<<cek;
	//int sa=0,sb=0,max=0;
	
	
	
	if(cek==1 && (k>=1 || l>= 1))cout<<"YES";
	else cout<<"NO";
}
