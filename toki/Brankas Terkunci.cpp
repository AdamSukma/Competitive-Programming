
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

void cetak(int *arr,int n){
	rep(i,0,n-2)cout<<arr[i]<<" ";
	cout<<arr[n-1];
}

void tulis(int kedalaman,int *arr){
	if(kedalaman>=k){
		cetak(arr,k);
		cout<<endl;
	}
	else{
		rep(i,arr[kedalaman-1]+1,n){
			arr[kedalaman]=i;
			tulis(kedalaman+1,arr);
		}
	}
}

int main(){
	int arr[100000];
	cin>>n>>k;
	rep(i,0,100000-1)arr[i]=0;
	tulis(0,arr);
}
