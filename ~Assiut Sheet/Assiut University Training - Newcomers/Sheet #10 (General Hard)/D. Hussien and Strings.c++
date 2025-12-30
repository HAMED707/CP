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
   string s,t;
   cin>>s>>t;
   if(s.size()!=t.size())NO

    int flag = 0;
    if (s == t)
    {
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size() - 1; i++)
        { // i<2 0 1
            if (s[i] == s[i + 1])
            {
                // 012
                // abb
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }else{
      int cnt =0, dx1=-1,dx2=-1;
      for (int i = 0; i < s.size(); i++)
      {
         if(s[i]!=t[i]){
            if(cnt==0)dx1=i;
            if(cnt==1)dx2=i;
            cnt++;
            }
           
      }
      if(cnt==2){
         swap(s[dx1],s[dx2]);
         if(s==t)YES
         else NO
      }else NO
       
   }
   }
 
 int main (){
    HAMED
    solve();
    return 0;
 }