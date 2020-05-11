#include<bits/stdc++.h>
using namespace std;
int arr[1000000][10];
struct dot{
	int x;
	int y;
};
dot s[1000000];
int compare(dot a,dot b){
	return a.x<b.x;
}
int main(){
	long long power,n;
	bool bener=1;
	cin>>power>>n;
	for(int i=1;i<=n;i++)cin>>s[i].x>>s[i].y;
	sort(s+1,s+n+1,compare);
	//for(int i=1;i<=n;i++)cout<<s[i].x<<"   "<<s[i].y<<endl;
	for(int i=1;i<=n;i++){
		if(power>s[i].x)power+=s[i].y;
		else bener=0;
		//cout<<power<<endl;
	}
	
	if(bener)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
