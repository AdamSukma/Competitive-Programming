#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		 if(s[0] == '+')
            x++;
        if(s[0] == '-')
            x--;
        if(s[2] == '+')
            x++;
        if(s[2] == '-')
            x--;
    }
		
	
	cout<<x<<endl;
	
	
	
}
