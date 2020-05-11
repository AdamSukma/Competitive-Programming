
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(i,j,l) for(int i=j;i<=l;i++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back
float i,j,k,n,m;
float h,u,d,f;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	while(scanf("%f%f%f%f",&h,&u,&d,&f),h){
		double height=0,h1=u;
		int p=0;
		do{
			height+=u;
			
			p+=1;
			//printf("%f %f\n",height,u);
			
			
			
			if(height>h){
			printf("success on day %d\n",p);break;
			}
			height-=d;
			if(height<0){
			printf("failure on day %d\n",p);break;
			}
			u-= (h1*f)/100;
			if(u<0)u=0;
		}while(true);
		
		
		
	}
}
