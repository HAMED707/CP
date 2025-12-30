#include <bits/stdc++.h>
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        while (digitSum(x) % k != 0) {
            x++;
        }
        cout << x << endl;
    }
}

int main() {
   // txt
    HAMED
    solve();
    return 0;
}
