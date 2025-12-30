#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    double z,y;cin>>z>>y;
    double ans=log2(y)/log2(z);
    printf("%.9lf",ans);
}


int main (){

     // txt
    HAMED
    solve();
    return 0;
}