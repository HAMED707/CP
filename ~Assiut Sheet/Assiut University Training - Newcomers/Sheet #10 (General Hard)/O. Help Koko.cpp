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

bool isprime(int x){
    if(x==0 or x==1)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for (int i = 3; i*i <= x; i+=2)
    {
        if(x%i==0)return 0;
    }return 1;
    
}
 void solve(){
   int n,x,last=0;cin>>n>>x;

   int nums[n];
   int qu[n];
    fr cin>>nums[i];
    fr {
        cin>>qu[i];
        if(qu[i]==1){
            if(isprime(nums[i])){
                if(nums[i]==2)last=0;
                else last =5;
            }else last=-1;
        }
        else last=0;
        cout<<last<<" ";
    }
    
   
   
   
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }