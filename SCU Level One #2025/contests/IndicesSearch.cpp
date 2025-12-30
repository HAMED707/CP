#include <bits/stdc++.h>



#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;
bool ispalindrom(string s) {
    int n=s.size();
    for (int i=0;i<n;i++) {
        if(s[i]!=s[n-i-1])return false;
    }
    return true;
}

void solve() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool flg = false;
        for (int i = 1; i < n - 1; i++) {
            if (p[i-1] < p[i] && p[i] > p[i+1]) {
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                flg = true;
                break;
            }
        }

        if (!flg) {
            cout << "NO" << endl;
        }
    }



}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}