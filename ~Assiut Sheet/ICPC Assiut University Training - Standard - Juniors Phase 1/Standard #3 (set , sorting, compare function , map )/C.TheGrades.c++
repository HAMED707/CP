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


void solve() {
    int n;
    cin >> n;
    vector<pair<string, vi>> v(n);


    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second.resize(5);
        ll total = 0;
        for (int j = 1; j < 5; j++) {
            cin >> v[i].second[j];
            total += v[i].second[j];
        }
        v[i].second[0] = total;
    }

    sort(v.begin(), v.end(), [](const pair<string, vi>& a, const pair<string, vi>& b) {
        if (abs(a.second[0] - b.second[0]) > 10) {
            return a.second[0] > b.second[0];
        }
        return a.first < b.first;
    });

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " ";
        for (int j = 0; j < 5; j++) {
            cout << v[i].second[j] << " ";
        }
        cout << ln;
    }
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}