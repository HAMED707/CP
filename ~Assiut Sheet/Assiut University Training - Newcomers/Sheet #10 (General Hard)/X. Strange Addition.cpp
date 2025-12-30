#include <bits/stdc++.h>
 
#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<string>
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
const int N=1e5+5;

 void solve(){
   int cnt;
   cin>>cnt;
   vi zero,nozero;
   int z=0,nz=0;
   string x;
   while (cnt--)
   {cin>>x;
   if(x.find('0')!= string::npos){z++;zero.push_back(x);}
   else {nz++;nozero.push_back(x);}
  }
  int czero=z,cnozero=nz;

while (czero > 0 && cnozero > 0) {
        czero--;
        cnozero--;
    }

 int ze_sz,nz_sz;

  ze_sz=z;
  if(cnozero==0)nz_sz=nz;
  else{nz_sz=nz-cnozero;}

    cout<<ze_sz+nz_sz dl;
   for(int i=0;i<nz_sz;i++)cout<<nozero[i]<<" ";
   for(int i=0;i<ze_sz;i++)cout<<zero[i]<<" ";
   
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }