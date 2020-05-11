
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	//cout<<"hello world";
	int t;
	cin>>t;
	fo(k,1,t){
		string s;
		int huruf[26];
		fo(i,0,25)huruf[i]=0;
		cin>>n>>s;
		//A=65
		int under=0;
		fo(i,0,s.size()-1){
			huruf[(int)s[i]-65]++;
			if(s[i]=='_')under++;
		}
	
		bool cek=true;
		fo(i,0,25)
		if(huruf[i]<2 && huruf[i]!=0)cek=false;
		cout<<cek<<" "<<under<<endl;
		if((cek==true) && (under>=1))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	
}
		
	
}
