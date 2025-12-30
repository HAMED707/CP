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

void solve(){

   string s;cin>>s;

    vector<int>pos(s.size());
    pos[s.size()-1]=s.size()-1;

    if(s.size()<=1) {
        cout<<s;return;
    }
     for (int i = s.size() - 2; i >= 0; i--) {
        if (s[i] > s[pos[i + 1]]) {
            pos[i] = i;
        } else {
            pos[i] = pos[i + 1];
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] < s[pos[i]]) {

            swap(s[i], s[pos[i]]);
            break;
        }
    }
cout<<s<<" ";
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}