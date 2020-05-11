
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

int main(){
	int arr[110];
	//memset(arr,0,sizeof(int));
	
	
	cin>>t;
	rep(k,1,t){
		int a,b,c;
		cin>>a>>b>>c;
		int player[a+1000];
		//memset(player,1,sizeof(int));
		rep(i,1,a)player[i]=1;
		rep(i,1,100)arr[i]=0;
		int snake;
		rep(i,1,b){
			cin>>snake;
			cin>>arr[snake];
		}
		//cout<<a<<" "<<b<<" "<<c<<" "<<arr[4]<<endl;
		int menang=0;
		rep(i,0,c-1){
			if(menang==0){
				int dice;
			cin>>dice;
			player[(i%a)+1]+=dice;
			if(player[(i%a)+1]>=100)player[(i%a)+1]=100;
			//cout<<arr[player[(i%a)+1]]<<endl;
			while(arr[player[(i%a)+1]]!=0){
				player[(i%a)+1]=arr[player[(i%a)+1]];
			}
			if(player[(i%a)+1]>=100){
				player[(i%a)+1]=100;
				menang=1;
			}
			
			}
			
		}
		rep(i,1,a)cout<<"Position of player "<<i<< " is "<<player[i]<<"."<<endl;
		//cout<<arr[4];
	}
}
