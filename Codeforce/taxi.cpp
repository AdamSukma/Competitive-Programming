#include<bits/stdc++.h>

using namespace std;
int arr[1000000];

int main(){
	
	int n,js=0,jd=0,jt=0,je=0,jx=0,sum=0,sisa=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(arr[i]==1)js++;
		if(arr[i]==2)jd++;
		if(arr[i]==3)jt++;
		if(arr[i]==4)je++;
		
		
	}
	
	sum+=je;
	if(jd%2==0)sisa=0;
	else sisa+=2;
	sum+=jd/2;
	if(js==jt){
	jt=0;	
	sum+=js;
}
	else if(js>jt){
		sum+=jt;
		sisa+=js-jt;
		jt=0;
	}else if(js<jt){
		sum+=js;
		jt-=js;
		
	}
	if(sisa%4==0){
	
	sisa= (sisa/4);	
}else sisa= (sisa/4)+1;
sum+=jt+sisa;
	//cout<<jd<<' '<<jx<<' '<<jt<<' '<<sisa<<endl;
	
	cout<<sum<<endl;
}
