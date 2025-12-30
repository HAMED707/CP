#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


    int n;
vector<pair<double,double>>v;
bool ok(double m) {
    ld sum=0;

    for (int i=0;i<n;i++) {

    }
}
void solve(){

    cin>>n;v.resize(n);
    for (auto&[x,y]:v)cin>>x>>y;
    sort(all(v));

    double l=0,r=1e9;
    while (r-l<1e-6) {
        double m=l+(r-l)/2;

        if(ok(m))

    }
}


int main (){

    txt
    HAMED
    solve();
    return 0;
}