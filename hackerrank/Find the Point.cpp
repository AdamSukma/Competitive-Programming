#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int px,py,qx,qy;
		cin>>px>>py>>qx>>qy;
		int rx,ry;
		if(px>qx)rx=qx-abs(qx-px);
		else rx=qx+abs(qx-px);
		if(py>qy)ry=qy-abs(qy-py);
		else ry=qy+abs(qy-py);
		cout<<rx<<" "<<ry<<endl;
	}
	
}
