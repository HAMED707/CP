// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  

//     while (t--) {
//         int n;
//         cin >> n;  
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];  
//         }

//         int total_coins = 0;
//         bool is_non_decreasing = true;

//         for (int i = 0; i < n - 1; ++i) {
//             if (a[i] > a[i + 1]) {
//                 is_non_decreasing = false;
                
//                 int gap = a[i] - a[i + 1];
//                 total_coins += gap;  
                
//                 a[i + 1] += gap;
//             }
//         }

        
//         if (is_non_decreasing) {
//             cout << 0 << endl;
//         } else {
            
//             cout << total_coins + 1 << endl;
//         }
//     }

//     return 0;
// }
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_map>
 
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define vii vector<vi>
#define vc vector<char>
#define vcc vector<vc>
#define vp vector<pl>
#define mi map<ll,ll>
#define mc map<char,int>
#define sortx(X) sort(X.begin(),X.end());
#define all(X) X.begin(),X.end()
#define ln '\n'
#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}
 
const int MODE = 998244353;
 
using namespace std;
 
 
void solve(int tc) {
    ll n;
 
    cin >> n;
 
    ll mx = 0, summ = 0;
    vi X;
    for (int i = 0; i < n; i++)
    {
        ll a; cin >> a;
        if (a < mx) X.push_back(mx - a);
        mx = max(mx, a);
    }
    mx = 0;
    n = X.size();
    sortx(X);
    for (int i = 0; i < n; i++)
    {
        if (X[i] > mx) summ += (n - i + 1) * (X[i] - mx);
        mx = max(X[i], mx);
    }
 
    cout << summ << '\n';    
}
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int size = 1;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> size;
    for (int i = 1; i <= size; i++)
            solve(i);
}