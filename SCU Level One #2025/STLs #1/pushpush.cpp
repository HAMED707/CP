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
    int a[n];
    for(auto& i:a)cin>>i;
    deque<int>b;
    bool rv=0;

    for (int i=0;i<n;i++) {
        if(!rv)b.push_back(a[i]);
        else b.push_front(a[i]);
        rv=!rv;
    }
    if(rv)reverse(all(b));
    for(auto& i:b)cout<<i<<' ';
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}