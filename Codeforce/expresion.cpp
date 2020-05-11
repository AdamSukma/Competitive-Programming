#include <bits/stdc++.h>
using namespace std;
#define ax arr[1]
#define ay arr[2]
#define az arr[3]
int arr[10];
int main(){
	int a,b,c;
	cin>>a>>b>>c;
int ans = a + b + c;
ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);
	//ans = max(ans, (a+c) * b);
	cout << ans << endl;
}
