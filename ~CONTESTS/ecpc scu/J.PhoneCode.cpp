#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()

using namespace std;
const int N=1e5+5;

int largPrime(long long n) {
    if (n <= 1) return -1;

    int ans = 1;

    while (n % 2 == 0) {
        ans = 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            ans = i;
            n /= i;
        }
    }


    if (n > 2) ans = n;

    return ans;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;


    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isSquare(int n) {

    int x = sqrt(n);
    return (x * x == n);
}

void solve(){

    int n;cin>>n;
    vector<string>v(n);
    for (auto& s:v)cin>>s;

    bool flg=1;
    int ans=0;
    for (int i = 0; i < v[0].length() and flg; ++i) {
        char c = v[0][i];
        for (int j = 1; j < n; ++j) {
            if (v[j][i] != c) {flg=0;break;}
        }

        if(flg)ans++;
    }
    cout<<ans;
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}