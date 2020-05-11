#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(n) for(int i=1;i<=n;i++)
LL arr[10000000];

int main(){
	int x1,y1,x2,y2,x3,x4,y3,y4,a,b,c,d;
	cin>>x1>>y1>>x2>>y2;
	if((x1==x2 && y1==y2) || (abs(x1-x2)!=abs(y1-y2) && x1!=x2 && y1!=y2 ) )cout<<-1;
	else{
		//5,6 7,8 || 7,6 6,8
		//7,6 7,8 || 5,6 6,8
		if(x1==x2){
			a=x1;
			b=y1;
			d=y2;
			c=x1+abs(b-d);
			
			//cout<<a<<b<<c<<d;
		if(abs(a-c)==abs(b-d))cout<<c<<" "<<b<<" "<<c<<" "<<d;
		else cout<<-1;
		}else if(y1==y2){
			a=x1;
			c=x2;
			b=y1;
			d=y1+abs(a-c);
			if(abs(a-c)==abs(b-d))cout<<a<<" "<<d<<" "<<c<<" "<<d;
			else cout<<-1;
		}else{
			a=x1;
			b=y1;
			c=x2;
			d=y2;
			if(abs(a-c)==abs(b-d))cout<<a<<" "<<d<<" "<<c<<" "<<b;
			else cout<<-1;
		}
		
		
	}
}
