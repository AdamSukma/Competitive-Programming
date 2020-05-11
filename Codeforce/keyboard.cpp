#include<bits/stdc++.h>
using namespace std;

string s[3]={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
string a,b;
int main(){
	cin>>a>>b;
	int x,y;
	
	for(int i=0;i<b.size();i++){
		
		for(int j=0;j<3;j++){
			//cout<<b<<endl;
			for(int k=0;k<10;k++){
				
				if(b[i]==s[j][k]){
					x=j;
					y=k;
					/*if(a=="L"){
						b[i]=s[j+1][k+1];
					}else{
						b[i]=s[j-1][k-1];
					}*/
					
				}
			}
			
		}
		if(a=="R"){
			b[i]=s[x][y-1];
		}else if(a=="L"){
			b[i]=s[x][y+1];
		}
		
	}
	
	cout<<b<<endl;
}
