#include <iostream>
#include <algorithm>
using namespace std;

string aliceHasWinningStrategy(int n, int a[]) {
    int freq[51] = {0}; 

    for (int i = 0; i < n; ++i) {
        freq[a[i]]++;
    }
    
    int max_freq = 0;
    for (int i = 1; i <= n; ++i) {
        max_freq = max(max_freq, freq[i]);
    }
    
    if (max_freq > n / 2) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        cout << aliceHasWinningStrategy(n, a) << endl;
    }
    
    return 0;
}
