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
bool comp(pair<char,int>a,pair<char,int>b){
    if(a.second<b.se)return 1;
    else return 0;
}

 void solve(){
   char l , s , r ;int A , B , C ;
   int cnt=3;
   while (cnt--)
   {
    cin>>l>>s>>r;
    if(s=='>'){

    if(l=='A'){A=0;A++;}
    else if(l=='B'){B=0;B++;}
    else if(l=='C'){C=0;C++;}

        
   }else if(s=='<'){

    if(r=='A'){A=0;A++;}
    else if(r=='B'){B=0;B++;}
    else if(r=='C'){C=0;C++;}
    
        
   }
   
   
 }
 vector<pair<char,int>>p={
    {'A',A},
    {'B',B},
    {'C',C}
 };
 
 
 for(auto& [x,y]:p)
 {
    if(y!=0){
    cout<<"Impossible"; return;    
    }
 //cout<<A<<" "<<B<<" "<<C;
 }
 sort(p.begin(),p.end(),comp);
 
  for(auto& [x,y]:p)
 {
    cout<<x;
 }
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }