#include<bits/stdc++.h>

using namespace std;

int apple[1000000],orange[1000000];
int main(){
	 int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    for(int i=1;i<=m;i++)cin>>apple[i];
    for(int i=1;i<=n;i++)cin>>orange[i];
    int suma=0,sumo=0;
    for(int i=1;i<=m;i++){
    	int x=a+apple[i];
    	if(x>=s && x<=t)suma++;
	}
	for(int i=1;i<=n;i++){
    	int x=b+orange[i];
    	if(x>=s && x<=t)sumo++;
    }
    cout<<suma<<endl<<sumo;
}

