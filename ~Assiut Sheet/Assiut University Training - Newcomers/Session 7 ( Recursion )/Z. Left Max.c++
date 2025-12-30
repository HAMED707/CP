#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

void re(int i, int n, int arr[], int mx) {
    if (i >= n) return;
    mx = max(mx, arr[i]);
    cout<<mx<<" ";
    re(i + 1, n, arr, mx);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    re(0, n, arr, INT_MIN);


    return 0;
}
