#include<bits/stdc++.h>
using namespace std;
int angka[]={5,15,30,50,75,105,140,180,225};
int main(){
	int n,menit,sisa=0,hasil=0;
	cin>>n>>menit;
	sisa=240-menit;
	
	for(int i=0;i<9;i++){
		
		if(sisa<angka[i])break;
		//cout<<angka[i]<<"  "<<sisa<<endl;
		hasil=i+1;
	}
	if(n>=hasil)cout<<hasil<<endl;
	else cout<<n<<endl;
	
}
