//
// Created by h70ab on 9/5/2024.
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
const int N=2*1e5+5;
vector<ll>freq(N,0);
void solve(){
int t;cin>>t;
while (t--) {

    ll n,res=0;cin>>n;
    vector<ll>element;
    for (int i=0;i<n;i++) {
        ll x;cin>>x;
        freq[x]++;
        if(freq[x]>=3)res=x;
        element.push_back(x);
    }
    cout<<(res?res:-1)dl;
    for (auto& i:element)freq[i]=0;
}

}

int main (){

   //txt
    HAMED
    solve();
    return 0;
}