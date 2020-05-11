#include <bits/stdc++.h>
#define fo(i,j,l) for(int i=j;i<=l;i++)
using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> arr) {
    fo(i,1,arr.size()-2){
        fo(j,1,arr.size()-2){
            bool cek=true;
            if(arr[i][j]<=arr[i][j-1])cek=false;
            if(arr[i][j]<=arr[i][j+1])cek=false;
            if(arr[i][j]<=arr[i-1][j])cek=false;
            if(arr[i][j]<=arr[i+1][j])cek=false;
            if(cek)arr[i][j]='X';
        }
    }
    return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }
    if(n==1)fout<<9;
    else{
        
    
    vector<string> result = cavityMap(grid);
    
    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }
    }

    fout << "\n";

    fout.close();

    return 0;
}

