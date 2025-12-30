#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


int n,x,y;
bool ok(int m) {
    return ((m/x)+(m/y))>=n;
}
void solve(){
    cin>>n>>x>>y;
    n--;
    int l=1,r   =n*min(x,y);
    int ans=0;

    // while (!ok(r))r*=2;
    while (l<=r) {
        int m=l+(r-l)/2;
        if(ok(m))r=m-1,ans=m;
        else l=m+1 ;
    }
    cout <<  ans+min(x,y) << '\n';
}


int main (){

    // txt
    HAMED
    solve();
    return 0;
}