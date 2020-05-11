#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
int i,j,k,n,m,a,b,f,s,t;

struct siswa{
	string nama;
	int kelas;
	int grup=0;
	
};
struct group{
	
	int jumlah=0;
	string anggota[201];
	int sf=0;
	int ss=0;
	int st=0;
};

int main(){
	cin>>n>>m>>a>>b>>f>>s>>t;
	siswa arr[n];
	fo(i,1,n-1)cin>>arr[i].nama>>arr[i].kelas;
	fo(i,1,n-1)cout<<arr[i].nama<<" "<<arr[i].kelas<<endl;;
	
}
