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
   
   int n;cin>>n;
 vector<pair<string,vi>>v(n);

  int res=0;
   fr{
    cin>>v[i].first;
     v[i].second.resize(5);
     v[i].se[0]=0;
    for (int j = 1; j < 5; j++)
    {
        cin>>v[i].second[j];
        res+=v[i].second[j];
    }
    v[i].second[0]=res;
    res=0;
    }

 

for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j].second[0] < v[j + 1].second[0]) { 
                swap(v[j], v[j + 1]); 
            }
            else if(v[j].second[0] == v[j + 1].second[0]){
              if(v[j].fi[0]-'A'>v[j + 1].fi[0]-'A')swap(v[j], v[j + 1]); 
            }
        }
    }  

   fr {
        cout << v[i].first << " ";
        for (int j = 0; j < 5; j++) {
            cout << v[i].second[j] << " ";
        }
        cout dl;
    }
    
  }

 int main (){
    HAMED
    solve();
    return 0;
 }