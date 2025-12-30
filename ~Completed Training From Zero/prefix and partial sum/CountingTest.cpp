//
// Created by h70ab on 9/2/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


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
const int N=1e5+5;
int prefix[26][N];
void solve(){
   int test;cin>>test;
   while (test--) {
        int len,q;cin>>len>>q;
        string s;cin>>s;
        s=" "+s;

       for (int i=0;i<26;i++) for(int j=1;j<=len;j++) {
            prefix[i][j]=prefix[i][j-1]+(s[j] - 'a' == i);
       }
       // for (int i=0;i<4;i++) {
       //     for(int j=1;j<=len;j++) {
       //         cout<<prefix[i][j]<<" ";
       //     }cout dl;
       // }

       while (q--) {
           int l,r;cin>>l>>r;
           char c;cin>>c;

           int left=0;
           l--;
           left+=prefix[c-'a'][len]*(l/len);
           left+=prefix[c-'a'][l%len];

           int right=0;
           right+=prefix[c-'a'][len]*(r/len);
           right+=prefix[c-'a'][r%len];

           cout<<right-left dl;
       }
   }


}

int main (){

   //txt
    HAMED
    solve();
    return 0;
}