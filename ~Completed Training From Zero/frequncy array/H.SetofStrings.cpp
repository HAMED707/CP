//
// Created by h70ab on 9/7/2024.
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
int vis[27];
void solve(){
    int k;cin>>k;
    char x;
    int ans=0;
    string s="";
    for (int i=0;i<26,cin>>x;i++) {
        s+=x;
        if(!vis[x-'a'])vis[x-'a']++,ans++;
    }
    cout<<(ans>=k?"YES":"NO") dl;
    //cout<<s;
    if(ans>=k) {
        k--;
        set<char>st;
        st.insert(s[0]);
        for (int i=0;i<s.size();i++) {
            cout<<s[i];
            if(st.find(s[i+1])==st.end()and s[i]!=s[i+1] and k )st.insert(s[i+1]),k--,cout dl;
        }
    }

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}