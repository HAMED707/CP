   ///     frecuancy array and build_in functions //Week #1
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
 using namespace std;
 //int freq[26];
//  void solve(){
//     string s;int n;cin>>n>>s;
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     for (int i = 0; i < s.size(); i++)
//     {
//         freq[s[i]-'a']=true; //visited array
//     }
//     for (int i = 0; i < 26; i++)
//     {
//        if(freq[i]==0){
//         cout<<"NO";
//         return;
//         }
//     }
//     cout<<"YES";
    

//  }
//                          map solution
  void solve(){
    char entry;int n;cin>>n;
    map<char,int>frq;
    for (int i = 0; i < n and cin>>entry; i++)
    {
      frq[tolower(entry)]++;
    }

    if(frq.size()==26)YES
    else NO
   
    


 }

 int main (){
    HAMED
    solve();
    return 0;
 }
