#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
#define ll long long
#define ld long double

 using namespace std;

void solve(){
    double c;
    cin >> c;
    double low = 0, high = c;
    double epsilon = 1e-6;

    while (high - low > epsilon) {
        double mid = (low + high) / 2;
        double f_mid = mid * mid + sqrt(mid);

        if (fabs(f_mid - c) < epsilon) {
            cout<< mid;return;
        } else if (f_mid > c) {
            high = mid;
        } else {
            low = mid;
        }
    }

    cout << fixed << setprecision(6) << (low + high) / 2 << endl;
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}
