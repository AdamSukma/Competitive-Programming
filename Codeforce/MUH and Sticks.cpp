#include<bits/stdc++.h>
using namespace std;
int arr[100],b[100];
int main(){
	for(int i=1;i<=6;i++)cin>>arr[i];
	sort(arr+1,arr+6+1);
	//for(int i=1;i<=6;i++)cout<<arr[i]<<" ";
	//cout<<endl;
	int a=arr[1],k=0,cek=0;;
	for(int i=1;i<=6;i++){
		if(arr[i]==a)k++;
		else {
			a=arr[i];
			b[cek]=k;
			k=1;
			cek++;
		}
	//	cout<<k<<endl;
		
		
	}
			b[cek]=k;
			k=1;
			cek++;
bool p=0;
	for(int i=0;i<cek;i++){
		if(b[i]>4)cek++;
		if(b[i]==3)cek++;
		if(b[i]>=4)p=1;
	}
	//cout<<"cek:"<<cek<<endl;
	if(cek==2 && p==1)cout<<"Elephant";
	else if(cek==3 && p==1)cout<< "Bear";
	else cout<<"Alien" ;
}
