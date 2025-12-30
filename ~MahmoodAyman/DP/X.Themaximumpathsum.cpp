#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;
const int inf=-2e8;



void solve(){
   int n,m;cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for (int i=0;i<n;i++)
    for (int j=0;j<m;j++)cin>>v[i][j];

    for (int i=1;i<m;i++)v[0][i]+=v[0][i-1];
    for (int i=1;i<n;i++)v[i][0]+=v[i-1][0];


    for (int i=1;i<n;i++)
        for (int j=1;j<m;j++) {
            v[i][j]+=max(v[i-1][j],v[i][j-1]);
        }

    // for (int i=0;i<n;i++) {
    //
    //     for (int j=0;j<n;j++) {
    //         cout<<v[i][j]<<' ';
    //     }cout<<'\n';
    // }
    cout<<v[n-1][m-1];

}

int main (){
    txt
    HAMED
    solve();
    return 0;
}