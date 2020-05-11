
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)

#define vi vector < int >
#define all(v) v.begin(),v.end()
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
	cin>>n;
	vi arr(n);
	fo(i,0,n-1)cin>>arr[i];
	vi arr2=arr;
	sort(all(arr2));
	vi beda;
	vi pos;
	fo(i,0,n-1){
		if(arr[i]!=arr2[i]){
			beda.pb(arr[i]);
			pos.pb(i);
		}
	}
	
	//for(int i=0;i<beda.size();i++)cout<<beda[i]<<endl;
	if(beda.size()==2){
		cout<<"yes"<<endl<<"swap "<<pos[0]+1<<" "<<pos[1]+1;
	}else{
		bool cek=true;
		fo(i,0,beda.size()-2){
			if(beda[i]<beda[i+1])cek=false;
		}
		if(cek)cout<<"yes"<<endl<<"reverse "<<pos[0]+1<<" "<<pos[pos.size()-1]+1;
		else cout<<"no";
	}
	
}
