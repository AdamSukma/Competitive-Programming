
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define vc vector < int >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int main(){
   	//cout<<"hello world";
	int t;
	cin>>t;
	fo(k,1,t){
		char a[1002],b[1002];
		cin>>a>>b;
		int arr[strlen(b)+1];
	//	arr[0]=-1;
		fo(i,0,strlen(a))a[i]=toupper(a[i]);
		bool cek[strlen(a)];
		fo(i,0,strlen(a)-1)cek[i]=1;
		fo(i,0,strlen(b)){
			fo(j,0,strlen(a)){
				if((b[i]==a[j]) && (cek[j]==1)){
					cek[j]=0;
					arr[i]=j;
					break;
				}else arr[i]=-1;
			}
		}
		bool result=true;
		fo(i,0,strlen(b)-2){
			if((arr[i]==-1) || (arr[i]>=arr[i+1]) || (arr[i+1]==-1))result=false;
			cout<<arr[i]<<" ";
		}
		if(result==true)cout<<"YES"<<endl;
		else cout<<"NO";
		
	}
	
}
