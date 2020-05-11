#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c,jarak=9999,x,y;
	int n,m;
	
	cin>>r>>c;
	cin>>n>>m;
	//pair <int,int> letak;
	string s[n];
	for(int i=0;i<n;i++)cin>>s[i];
	
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		
		if(s[i][j]=='d'){
			if(jarak>abs(i-r)+abs(j-c)){
				jarak=abs(i-r)+abs(j-c);
				x=i;
				y=j;
			}
			//cout<<x<<" "<<y<<" "<<jarak<<endl;
		}
		
		
		}
		//cout<<endl;
	
}
		
	//	cout<<x<<y<<r<<c<<endl;
		if(s[r][c]=='d')cout<<"CLEAN";
		else 
		
	if(x>r ){	
		cout<<"DOWN"<<endl;
	}else if(x<r && x!=r){
		cout<<"UP"<<endl;
	}else
	if(y>c && y!=c){
		cout<<"RIGHT"<<endl;
	}else{
		cout<<"LEFT"<<endl;
	}

	
	
	
	
}
