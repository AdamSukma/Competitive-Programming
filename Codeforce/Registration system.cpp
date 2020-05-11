#include<bits/stdc++.h>
using namespace std;
struct titik {
	string nama;
	int no;
};
titik s[1000000];

int main(){
	int n,sama=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].nama;s[i].no=i;
	}
	//sort(s+1,s+n+1);
	/*cout<<"OK"<<endl;
	for(int i=2;i<=n;i++){
		if(s[i]==s[i-1])sama++;
		else sama=0;
		if(sama==0)cout<<"OK"<<endl;
		else cout<<s[i]<<sama<<endl;
	}*/
}
