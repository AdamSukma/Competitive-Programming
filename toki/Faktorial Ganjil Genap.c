
#include<stdio.h>

int i,j,k,n,m;
//vector < vector<int> > arr;
//vector<int> v(n);

int rekursif(int n){
	if(n<=1)return 1;
	else if(n%2==0)return (n/2)*rekursif(n-1);
	else return n*rekursif(n-1);
}

int main(){
	scanf("%d",&n);
	printf("%d",rekursif(n));
	
}
