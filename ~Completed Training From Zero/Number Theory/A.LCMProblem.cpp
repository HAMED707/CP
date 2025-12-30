#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve() {
    int t;cin>>t;
    while (t--) {
        int l,r;cin>>l>>r;


        if(2*l<=r) {
            cout<<l<<" "<<2*l<<'\n';
        }else cout<<-1<<" "<<-1<<'\n';
    }
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}