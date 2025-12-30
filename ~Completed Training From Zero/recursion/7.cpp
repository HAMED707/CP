//
// Created by h70ab on 8/26/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define vii vector<vi>
#define viii vector<vii>
#define vc vector<char>
#define vcc vector<vc>
#define vp vector<pl>
#define vpp vector<vp>
#define vppp vector<vpp>
#define mi map<ll,ll>
#define unmi unordered_map<ll, ll>
#define mc map<char,int>
#define sortx(X) sort(X.begin(),X.end());
#define all(X) X.begin(),X.end()
#define ln '\n'
#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}
#define fi first
#define se second
#define sz(x) int(x.size())
#define fixed(n) fixed << setprecision(n)
#define dl <<"\n"
#define fr for(int i = 0; i < n; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
// const int N=1000;
// int arr[N];
//int n;
// int fib(int n) { return n <= 2? arr[n] = n: arr[n] = fib(n - 1) + fib(n - 2); }
// void solve(){
// cin>>n;
//     fib(N);
//     map<int,int>mp;
//     for (int i=1;i<=N;i++)mp[arr[i]]++;
//     for(int i = 1; i <= n; ++i) cout << (mp[i]? 'O': 'o');
// }
// const int N=1000;
// string s;int n ;vector<ll>memo(N,-1);
//
// ll fib(ll i) {
//     if(i==1 or i==2)return 1;
//     if(memo[i]!=-1)return memo[i];
//
//     memo[i]=fib(i-1)+fib(i-2);
//     return memo[i];
// }
// void solve(){
//     memo[1]=1;
//     memo[2]=1;
//     fib(20);
//     map<int,int>mp;
//     for(int i=1;i<=20;i++)mp[memo[i]]++;
//     cin>>n;
//     for (int i=1;i<=n;i++)cout<<(mp[i]?'O':'o');
//
//
// }
const int N=1000;
string s;int n ;vector<ll>memo(7000,-1);

ll fib(ll i) {
    if(i==1 or i==2)return 1;
    if(memo[i]!=-1)return memo[i];

    memo[i]=fib(i-1)+fib(i-2);
    return memo[i];
}
void solve(){
    memo[1]=1;
    memo[2]=1;
    fib(16);
    cin>>n;
    s=string(n,'o');
    memo.resize(n + 1, -1);
    fr1n {
        ll fib_num = memo[i];
        if (fib_num -1 < n) {
            s[fib_num -1] = 'O';
        } else {
            break;
        }
    }
    cout<<s;
}
int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}