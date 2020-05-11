#include<bits/stdc++.h>

using namespace std;
	
	int arr[9][15]={
	{8,1,6,3,5,7,4,9,2},
	{2,9,4,7,5,3,6,1,8},
	{6,1,8,7,5,3,2,9,4},
	{4,9,2,3,5,7,8,1,6},
	
		
	
	
	
	
	};
int main (){
	int magic[10];
	for(int i=0;i<9;i++)cin>>magic[i];
	int kecil=10000;
	for(int i=0;i<9;i++){
		if(magic[i]<kecil)kecil=magic[i];
	}
	for(int i=0;i<9;i++){
	magic[i]-=kecil-1;
	}
	int min=10000;
	for(int i=0;i<4;i++){
		int x=0;
		for(int j=0;j<9;j++){
			x+=abs(magic[j]-arr[i][j]);
			//cout<<magic[j]<<" "<<arr[i][j] <<endl;
		}
		//cout<<endl;
		if(x<=min)min=x;
	}
	for(int i=1;i<=9;i++){
		int x=0;
		for(int j=1;j<=9;j++){
			x+=abs(magic[j]-j);
	}
	if(x<=min)min=x;
}
	cout<<min;
}
