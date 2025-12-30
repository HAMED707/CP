#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int x;cin>>x;
    vector<int>a(x);
    for (auto&i:a)cin>>i;

    for (int i=0;i<=256;i++) {
    int ans=0;

        for (auto&c:a) {
            ans^=c^i;
        }
        if(ans==0)return void(cout<<i<<'\n');
    }
    cout<<-1<<'\n';

}

int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}