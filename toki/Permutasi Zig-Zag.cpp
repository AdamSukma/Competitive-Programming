
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

void print(int *arr, int l){
	rep(i,0,l-2)cout<<arr[i];
	cout<<arr[l-1]<<endl;
}

void fak(int x, int *arr){
	if(x>=n){
		bool cek =true;
		rep(i,1,n-2){
		if(arr[i]>arr[i-1] && arr[i]<arr[i+1])cek=false;
		if(arr[i]<arr[i-1] && arr[i]>arr[i+1])cek=false;
			
		}
		if(cek)print(arr,n);
	}else{
		rep(i,1,n){
			bool cek=true;
			rep(j,0,x-1){
				if(arr[j]==i)cek=false;
				
			}
			if(cek==true){
				arr[x]=i;
				fak(x+1,arr);
			}
			
		}
	}
}


int main(){
	cin>>n;
	int arr[n+1000];
	rep(i,0,n+999)arr[i]=0;
	fak(0,arr);
	
}
