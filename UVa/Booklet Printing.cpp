
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

int main(){
	while (scanf("%d",&n),n){
		int pages;
		if(n==1)cout<<"Printing order for " << n<<" pages:\n"<<"Sheet 1, front: Blank, 1\n";
		else
		{
		
		if(n%4==1){
			pages=(n+1)/2+1;
		}else if(n%4==3){
			pages=(n/2)+1;
		}else if(n%4==0){
			pages=n/2;
		}else{
			pages=n/2+1;
		}
		cout<<"Printing order for " << n<<" pages:\n";
		int kiri=pages*2,kanan=1,tambah=1;
		
		rep(i,1,pages/2){
			cout<<"Sheet "<<i<< ", front: ";
			if(kiri>n){
				cout<<"Blank, ";
			}else{
				cout<<kiri<<", ";
			}
			if(kanan>n){
				cout<<"Blank\n";
			}else{
				cout<<kanan<<endl;
			}
			kiri-=tambah;kanan+=tambah;
			tambah*=-1;
			kiri+=kanan;
			kanan=kiri-kanan;
			kiri=kiri-kanan;
			
			
			cout<<"Sheet "<<i<< ", back : ";
			if(kiri>n){
				cout<<"Blank, ";
			}else{
				cout<<kiri<<", ";
			}
			if(kanan>n){
				cout<<"Blank\n";
			}else{
				cout<<kanan<<endl;
			}
			kiri-=tambah;kanan+=tambah;
			tambah*=-1;
			kiri+=kanan;
			kanan=kiri-kanan;
			kiri=kiri-kanan;
			
		}
	}
	}
}
