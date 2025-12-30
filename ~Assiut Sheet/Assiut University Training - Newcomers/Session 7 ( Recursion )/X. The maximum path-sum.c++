#include <iostream>
#include <vector>
using namespace std;

int re(int n, int m, const vector<vector<int>>& arr) {
    if (n < 0 || m < 0) return 0;
    if (n == 0 && m == 0) return arr[0][0]; 
    if (n == 0) return arr[n][m] + re(0, m-1, arr);
    if (m == 0) return arr[n][m] + re(n-1, 0, arr);

    int up = re(n-1, m, arr);
    int left = re(n, m-1, arr);
    return arr[n][m] + max(up, left);  
}

int main() {
    int n,m ;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < m; j++){
        cin>>arr[i][j];
        }}
    cout<<re(n-1,m-1,arr);
    return 0;
}
