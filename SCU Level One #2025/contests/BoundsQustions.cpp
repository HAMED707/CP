    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){

    int n,q;cin>>n>>q;
    int a[n];
    for(auto& i:a)cin>>i;
    int mx=0,mxr=0;
    vector<int>v;
    v.push_back(0);
    for (int i=0;i<n;i++) {
        mxr=0;
        mx=max(mx,a[i]);
        int c=i;
        while (c<n-1) {
            if(a[c+1]>a[i]) {
                mxr=a[c+1];
                break;
            }
            c++;
        }
        v.push_back(mx+mxr);
    }
    for (int i=1;i<=n;i++) {
        v[i]+=v[i-1];
    }
    // for(auto& i:v) {
    //     cout<<i<<" ";
    // }cout<<endl;

    while (q--) {
        int l,r;cin>>l>>r;
        cout<<v[r]-v[l-1]<<'\n';
    }


}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}