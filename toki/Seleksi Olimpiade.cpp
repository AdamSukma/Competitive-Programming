
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(I,J,L) for(int I=J;I<=L;I++)
#define all(v) v.begin(),v.end()
#define vint vector < int >
#define vstr vector < string >
#define pb push_back

int i,j,k,n,m,t;
//vector < vector<int> > arr;
//vector<int> v(n);
struct coba{
	int n1,n2,n3;
	string nama;
};

bool cmp(coba a,coba b){
	if(a.n3==b.n3){
		if(a.n2==b.n2){
			return a.n1>b.n1;
		}else return a.n2>b.n2;
	}else return a.n3>b.n3;
}
int main(){
	cin>>t;
	rep(k,1,t){
		string cari;
		cin>>n>>m>>cari;
		coba arr[n+10];
		rep(i,1,n){
			cin>>arr[i].nama>>arr[i].n1>>arr[i].n2>>arr[i].n3;
		}
		sort(arr+1,arr+n+1,cmp);
		//rep(i,1,n){
		//	cout<<arr[i].nama<<" "<<arr[i].n1<<" "<<arr[i].n2<<" "<<arr[i].n3<<endl;
		//}
		bool cek=0;
		rep(i,1,m){
			if(arr[i].nama==cari)cek=1;
		}
		if(cek)cout<<"YA"<<endl;
		else cout<<"TIDAK"<<endl;
		
	}
}
