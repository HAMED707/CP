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
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
 bool isprime(long long x){
    if(x==0||x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    
    for (int i = 3; i*i <= x; i+=2)
    {
        if (x%i==0)
        {
            return false;
        } 
    }
    return true;
}
vector<ll>memo(100001,-1);
int fib(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    if(memo[n]!=-1)return memo[n];
    memo[n] = (fib(n-1)+fib(n-2))%51;
    return memo[n];
}
 void solve(){
   int x,cnt;cin>>cnt;
   while (cnt--)
   {
    cin>>x;
    cout<<(isprime(fib(x))?"prime":"not prime")dl; 
   }
   
 }

 int main (){
    HAMED
    solve();
    return 0;
 }
