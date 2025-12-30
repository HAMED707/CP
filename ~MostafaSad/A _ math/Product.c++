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
string Multi(string s,string z){
    reverse(s.begin(),s.end());
    reverse(z.begin(),z.end());

    int s_sz=s.size();
    int z_sz=z.size();
    string ans="";
    for (int i = 0; i < s_sz; i++)
    {for (int j = 0; j < z_sz; j++)
    {   int pos=i+j;
        int x=(s[i]-'0')*(z[j]-'0');
        while (x>0)
        {
            while (ans.size()<pos+1)
            {
                ans+="0";
            }
            int tmp=(x%10)+ans[pos]-'0';
            ans[pos]=char(tmp%10+'0');
            x/=10;
            x+=(tmp/10);
            pos++;
            
        }
        
    }}

    reverse(ans.begin(),ans.end());
    return ans;
}

 void solve(){
   string s,z;
   while (true)
   {
    cin>>s>>z;
    cout<<Multi(s,z);
   }
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }