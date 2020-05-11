
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m;
vector < int > arr;


int main(){
	string s;
	//arr.pb(0);
	cin>>s;
   	cin >> n;
   	if(s.size()>1){
	   
   	LL sum=(n/s.size());
   	LL h=0;
   	fo(i,0,s.size()-1){
   		if(s[i]=='a'){
   			h++;
   			arr.pb(i+1);
		   }
	   }
	   
	   //fo(i,0,arr.size()-1)cout<<arr[i]<<endl;
	   int tambah=0;
	   if(h!=s.size())
	   fo(i,0,(n%s.size())-1){
	   		if(s[i]=='a')tambah++;
	   }else{
	   	tambah=n%s.size();
	   }
   	cout<<(sum*h)+tambah;
	
}else {
	if(s[0]=='a')cout<<n;
	else cout<<0;
}
}
