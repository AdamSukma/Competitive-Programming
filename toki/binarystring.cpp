
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

LL i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);
string toBinary(LL n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
LL toDecimal(string s){
	LL r =0;
	for(i=0;i<s.size();i++){
		if(s[i] == '0'){
			r*=2;
		}else{
			r*=2;
			r+=1;
		}
		
	}
	return r;
}
int main(){
	string s;
	cin>>n>>s;
	string u = toBinary(n);
	int selisih  = s.size() - u.size();
	int cek = selisih;
	for(i=0;i<s.size();i++){
		
	}
	
}
