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
    int a[n],b[m];
    for (auto&i:a)cin>>i;
    for (auto&i:b)cin>>i;

    int x=0,y=0;
    vector<int>v;

    while (x<n or y<m) {
        if(x==n or (y<m and a[x]>b[y])) {
            v.push_back(b[y++]);
        }else {
            v.push_back(a[x++]);
        }

    }
    for(auto&i:v)cout<<i<<' ';
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}