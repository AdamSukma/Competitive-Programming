
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
	while(scanf("%d",&n),n+1){
		string a,b;
		cin>>a>>b;
		int arr[30];
		memset(arr,0,sizeof(arr));
		
		rep(i,0,a.size()){
			arr[((int)a[i])-96]=1;
		}
		int beda=0,sama=0,sum=0;
		rep(i,1,27)sum+=arr[i];
		cout<<"Round "<<n<<endl;
		rep(i,0,b.size()-1){
			if(arr[((int)b[i])-96]==1){
				sama++;
				arr[((int)b[i])-96]=-1;
			}
			else if(arr[((int)b[i])-96]==0)beda++;
			if(sum==sama){
				cout<<"You win."<<endl;break;
			}else if(beda>=7){
				cout<<"You lose."<<endl;break;
			}
		}
		if(beda<7 && sum!=sama)cout<<"You chickened out."<<endl;
		//cout<<sum<<" "<<sama<<" "<<beda<<endl;

		
		
		
	}
}
