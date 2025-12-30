    #include <bits/stdc++.h>

    #define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    #define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


    #define ll long long
    #define ld long double
    #define all(X) X.begin(),X.end()


     using namespace std;
    const int N=2*1e5+2;

    void solve() {
        int n,m;cin>>n>>m;
        multiset<int>v;
        for(int i=0;i<n;i++){int x;cin>>x;v.insert(x);}

        while (m--) {
            int x;cin>>x;

            auto l=v.upper_bound(x);

            if (l == v.begin()) {
                cout << -1 << endl;
            } else {

                l--;
                cout << *l << endl;
                v.erase(l);
            }

        }
    }

    int main (){

        //txt
        HAMED
        solve();
        return 0;
    }