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
    vector<int>v(n);
    for(auto& i:v)cin>>i;
    sort(all(v));
    int q;cin>>q;
    vector<int>z;
    while (q--) {
        int x;cin>>x;
        auto l=lower_bound(all(v),x);
        if(find(all(v),x)!=v.end())cout<<"Yes ";
        else cout<<"No ";
        cout<<l-v.begin()+1<<'\n';
    }

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}