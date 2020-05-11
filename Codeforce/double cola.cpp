#include<bits/stdc++.h>
#define LL long long 
using namespace std;
LL k[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int main(){
	int n,sisa,x,hasil;
	cin>>n;
	sisa=n;
	x=0;
	while(sisa>5*k[x] && sisa>0){
	
	sisa-=5*k[x];
	x++;
	//cout<<sisa<<' '<<x<<endl;
}
hasil=(sisa-1)/k[(x)];
//cout<<hasil<<' '<<k[x]<<endl;;
if(hasil==0)cout<<"Sheldon"<<endl;
if(hasil==1)cout<<"Leonard"<<endl;
if(hasil==2)cout<<"Penny"<<endl;
if(hasil==3)cout<<"Rajesh"<<endl;
if(hasil==4)cout<<"Howard"<<endl;


}
