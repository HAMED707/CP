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
        map<string,int>mp;

        while (n--) {
            string s;cin>>s;
            int m;cin>>m;
            mp[s]=m;
        }

        while (q--) {
            int o,x;
            string s;
            cin>>o;
            if(o==1) {
                cin>>s>>x;
                mp[s]+=x;
            }
            else {
                cin>>s;
                cout<<mp[s]<<'\n';
            }
        }

    }

    int main (){

        txt
        HAMED
        solve();
        return 0;
    }