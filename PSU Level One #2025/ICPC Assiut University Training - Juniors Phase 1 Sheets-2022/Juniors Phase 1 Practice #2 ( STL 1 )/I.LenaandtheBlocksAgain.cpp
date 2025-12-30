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
        vector<int>a(n);for(auto&i:a)cin>>i;
        int x=*max_element(all(a));
        int mn=*min_element(all(a));
    cout<<x-mn;
}


int main (){

    // txt
    HAMED
    solve();
    return 0;
}