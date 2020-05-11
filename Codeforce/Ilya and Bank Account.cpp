#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y,hasil=0;;
	cin>>n;
	if(n>=0){
		cout<<n<<endl;
	}else{
		x=n%10*-1;
		y=(n%100)+x;
		y=y/10*-1;
		hasil=(n/100);
		if(x<y){
			
			hasil=(hasil*10)-x;
		}else {
			hasil=(hasil*10)-y;
		}
		cout<<hasil<<endl;	
	}
	
}
