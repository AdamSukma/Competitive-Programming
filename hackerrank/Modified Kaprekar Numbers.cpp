
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
LL i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	cin >> n>>m;
   	LL sum=0;
   	fo(i,n,m){
   		LL kuadrat=(long long)i*i;
   		string s = to_string(kuadrat);
   		LL p=s.size();
   		string a = s.substr(0,p/2);
   		string b= s.substr((p/2));
   		LL c=0,d=0;
   		stringstream str1(a);
   		str1>>c;
   		stringstream str2(b);
   		str2>>d;
   		//cout<<a<<" "<<b<<" "<<i<<" "<<s<<" "<<c<<" "<<d<<" "<<c+d<<" "<<kuadrat<<endl;
   		if(c+d==i){
   			cout<<i<<" ";
   			sum++;
		   }
	   }
	
	if(sum==0)cout<<"INVALID RANGE";
	
	return 0;
}
