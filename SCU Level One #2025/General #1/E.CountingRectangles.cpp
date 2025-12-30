#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1000+5;
void solve(){

vector<vector<long long>> p(N, vector<long long>(N));

    int n,q;cin>>n>>q;

    while (n--) {
        ll x,y;cin>>x>>y;
        p[x][y]+=x*y;
    }

    for (int i=1;i<=1000;i++)
        for (int j=1;j<=1000;j++) {
            p[i][j]+=p[i][j-1]+p[i-1][j]-p[i-1][j-1];
        }

    while (q--) {
        int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
        cout<<p[r2-1][c2-1]+p[r1][c1]-p[r2-1][c1]-p[r1][c2-1]<<'\n';
    }
}

int main (){
    //txt
    HAMED
    int t;cin>>t;
    while (t--){solve();}
    return 0;
}