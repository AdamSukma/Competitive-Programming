
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m;
float r,l,w;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	while(scanf("%f",&r),r){
		scanf("%f %f",&w,&l);
		i++;
		float diag = sqrt(((w/2)*(w/2)) + ((l/2)*(l/2)));
		if(diag>r){
			printf("Pizza %d does not fit on the table.\n",i);
		}else{
			printf("Pizza %d fits on the table.\n",i);
		}
	}
}
