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
const int N=27;
int freq[N];
void solve(){

   int n,k;cin>>n>>k;
    string s;cin>>s;

    for (int i=0;i<n;i++) {
        freq[s[i]-'a']++;
    }
    for (int i=0;i<26;i++) {
        if(freq[i]>k) {
            freq[i]-=k;
            k=0;
        }else {
            k-=freq[i];
            freq[i]=0;
        }
    }

    bool del[n]{};
for (int i=n-1;i>=0;i--) {
    if(freq[s[i]-'a']) {
        freq[s[i]-'a']--;
    }
    else {
        del[i]=1;
    }
}
    for(int i=0;i<n;i++) {
        if(!del[i])cout<<s[i];
    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}