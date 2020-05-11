
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
bool change(char cur, char c1, char c2){
    if(cur == 'x' && c1 == '-') return true;
    if(cur == 'y' && c2 == 'y' && c1 == '+') return true;
    if(cur == 'z' && c2 == 'z' && c1 == '+') return true;
    return false;
}
int main(){
	while(scanf("%d",&n),n){
		char s[10];
		char c='x';
		int arah=1;
		rep(i,1,n-1){
			cin>>s;
			if(s[0]=='N')continue;
			if(change(c,s[0],s[1])) arah = -arah;
			if(c == 'x') c = s[1];
            else if(c == 'y' && s[1] == 'y') c = 'x';
            else if(c == 'z' && s[1] == 'z') c = 'x';
		}
		printf("%c%c\n",arah == 1? '+' : '-',c);
		
		
	}
}
