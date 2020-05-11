
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);
string s;

int main(){
	cin>>n>>s;
	int sum =0;
	rep(i,97,(int)'z'){
		rep(j,98,(int)'z'){
			if(i!=j){
				int c1=0,c2=0;
				rep(k,0,n-1){
					if(i == (int)s[k]){
						c1++;
					}
					if(j == (int)s[k]){
						c2++;
					}
					if(abs(c1-c2)>1){
						break;
					}
				}
				if(abs(c1-c2)<=1){
					if(c1+c2 >= sum){
						sum = c1+c2;
					}
					cout<<(char)i<<" "<<(char)j<<" "<<c1<<" "<<c2<<endl;
				}
			}
		}
	}
	cout<<sum<<endl;
}
