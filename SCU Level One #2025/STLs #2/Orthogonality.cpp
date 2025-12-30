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
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int j=0;j<n;j++)cin>>b[j];
        ll ans=0;
        for(int i=0;i<n;i++)ans+=(long long)a[i]*b[i];

        cout<<(ans!=0?"No":"Yes");

    }

    int main (){
       txt
        HAMED
        solve();
        return 0;
    }