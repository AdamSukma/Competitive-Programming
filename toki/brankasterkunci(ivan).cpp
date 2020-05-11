#include <bits/stdc++.h>
using namespace std;
void tulis(int x, int *arr, int n, int k) {
  if (x >= k) {
    for (int i = 0; i < k-1; i++) {
      printf("%d ", arr[i]);
    }
    printf("%d", arr[k-1]);
    printf("\n");
  }
  else {
  	if (x==0){
  		for (int j = arr[x] ; j < n; j++) {
      		arr[x] = j+1;
      		tulis(x + 1, arr, n, k);
    } 
	  }
	  else{
	  	 for (int j = arr[x - 1] ; j < n; j++) {
      arr[x] = j+1;
      tulis(x + 1, arr, n, k);
    } 
	  }
   
  }
}

int main() {
  int arr[1000], n, k;
  scanf("%d",&n);
  scanf("%d",&k);
  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }
  tulis(0, arr, n, k);
}
