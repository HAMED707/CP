#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int n,m;cin>>n>>m;
        vector<int>m1,m2;
        int b1,b2;
    while (m--) {
        cin>>b1;
        while (b1--) {
            int x;cin>>x;
            m1.push_back(x);
        }
        cin>>b2;
        while (b2--) {
            int x;cin>>x;
            m2.push_back(x);
        }
    }

    if(b1!=b2 )return void(cout<<"No");
    // if( m1[b1-1] !=m2[b1-1])return void(cout<<"No");
    //
    //     for (int i=b1-2;i>=0;i--) {
    //         if(m1[i]!=m2[i])return void(cout<<"No");
    //     }
    //     cout<<"Yes";
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}