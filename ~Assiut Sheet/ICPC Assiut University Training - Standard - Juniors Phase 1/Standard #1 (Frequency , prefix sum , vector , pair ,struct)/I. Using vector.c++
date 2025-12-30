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


 void solve(){
   
   int n,cnt;cin>>n>>cnt;
   vi arr(n);
   for(auto& a:arr)cin>>a;
   while (cnt--)
   { 
    string s;cin>>s;
    if(s=="sort"){
        int a,b;
        cin>>a>>b;
        sort(arr.begin()+a-1,arr.begin()+b);
    }
    else if(s=="pop_back"){
      arr.pop_back();
    } 
    else if(s=="back"){
      cout<<arr.back() dl;
    }
    else if(s=="reverse"){
      int a,b;
        cin>>a>>b;
      reverse(arr.begin()+a-1,arr.begin()+b);
    }
    else if(s=="front"){
      cout<<arr.front() dl;
    }
    else if(s=="push_back"){
      int a;cin>>a;
      arr.push_back(a);
    }
    else if(s=="print"){
      int a;cin>>a;
      cout<<arr[a-1] dl;
    }
   }  
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }