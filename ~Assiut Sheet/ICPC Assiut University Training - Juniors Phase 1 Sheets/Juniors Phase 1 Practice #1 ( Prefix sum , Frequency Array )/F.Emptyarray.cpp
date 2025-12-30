#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
using namespace std;
const int N=1e6+5;

void solve(){

    int n;cin>>n;int
    freq[100001] = {0};
    int v[100001];

    int idx=0,mx=-1;

    for (int i=0;i<n;i++) {
        int x;cin>>x;
        if(freq[x]==0) {
            v[idx]=x;
            idx++;
            freq[x]++;

        }else freq[x]++;
        mx=max(mx,freq[x]);
    }

   while (true) {
        bool ok=false;
        for (int j=0;j<idx;j++) {
            if(freq[v[j]]) {
                cout<<v[j]<<' ';
                ok=true;
                freq[v[j]]--;
            }
        }if(!ok)return;
            cout<<'\n';
    }
}

int main (){
        // txt
    HAMED
    solve();
    return 0;
}