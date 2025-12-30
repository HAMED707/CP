#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const ll N=1e9+5;


void solve() {

    int a,b;cin>>a>>b;
    int q;cin>>q;
    int g=__gcd(a,b);
    vector<int>div;
    for (int i=1;i*i<=g;i++) {
        if(g%i==0) {
            div.push_back(i);
            if(i!=g/i)div.push_back(g/i);
        }
    }
    sort(div.begin(),div.end());
    while (q--) {
        int l,r;cin>>l>>r;
        int ans=-1;
        for (auto i:div) {
           if(i >=l and i <=r and a%i==0 and b%i==0)ans=i;
        }
        cout<<ans<<endl;
    }

}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}