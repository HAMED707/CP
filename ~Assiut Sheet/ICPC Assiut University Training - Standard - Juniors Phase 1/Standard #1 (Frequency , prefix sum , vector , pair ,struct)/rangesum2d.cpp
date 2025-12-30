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
#define fr1 for(int i = 1; i <= n; i++)
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
 using namespace std;
 
 void solve() {
  ll row , col ,q;
  cin>>row >>col >>q;
  ll prf[row+1][col+1]={};
  for (int i=1;i<=row;i++) for(int j=1;j<=col;j++) {
   cin>>prf[i][j];
   prf[i][j]+=prf[i-1][j]+prf[i][j-1]-prf[i-1][j-1];
  }
   ll x1,x2,y1,y2;
  while (q--) {
   cin>>x1>>y1>>x2>>y2;

   cout<< prf[x2][y2]-prf[x1-1][y2]-prf[x2][y1-1]+prf[x1-1][y1-1] dl;
  }
 }

 int main (){
     //txt
    HAMED
    solve();
    return 0;
 }
