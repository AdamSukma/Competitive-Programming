
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fo(i,j,l) for(int i=j;i<=l;i++)
#define all(v) v.begin(),v.end()
#define vi vector < int >
#define vs vector < string >
#define pb push_back
int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);
int cmp(int a,int b){
    return a>b;
}
int main(){
    char s[100007];
    cin>>s;
    vi arr(27);
    //a=97
    fo(i,0,strlen(s)-1){
        arr[(int)s[i]-97]+=1;
    }
    int batas=0;
    
    sort(all(arr),cmp);
    fo(i,0,25){
        if(arr[i]>0)batas++;
    }
    //fo(i,0,25)cout<<arr[i]<<endl;
    fo(i,0,25){
        fo(j,i,25){
            if(arr[i]!=arr[j] && arr[i]!=0 && arr[j]!=0)batas--;
        }
    }
    if(batas>0)cout<<"YES";
    else cout<<"NO";
}

