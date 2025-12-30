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
    int mn = INT_MAX;

    for (int a = 1; a <= sqrt(n); ++a) {
        if (n % a == 0) {
            int perimeter= 2*a + 2*(n/a);
            mn=min(perimeter,mn);
        }
    }

    cout <<mn;
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}