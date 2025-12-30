#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

void solve(){
   int n;cin>>n;
    map<string,int>mp;
    string s;cin>>s;
        int mx=0;
    string res="";
    for (int i = 0; i < n - 1; i++) {
        string sub = s.substr(i, 2);
        mp[sub]++;
        if (mp[sub] > mx) {
            mx = mp[sub];
            res = sub;
        }
    }

    cout<<res;
    //for (auto& i:mp)cout<<i.first<<" " <<i.second<<'\n';


}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}