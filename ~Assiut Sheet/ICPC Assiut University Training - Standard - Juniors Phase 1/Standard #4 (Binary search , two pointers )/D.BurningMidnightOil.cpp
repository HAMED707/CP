#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


    int n,k;
bool ok(ll m) {
        ll sum=0;
    for (int i=0;true;i++) {
        ll res=m/pow(k,i);
        sum+=res;
        if(res <=0)break;
    }
    return (sum>=n);
}
void solve(){
    cin>>n>>k;
    int l=0,r=n,ans=0;
    while (l<=r) {
        ll m=l+(r-l)/2;

         if(ok(m))r=m-1,ans=m;
        else l=m+1 ;
    }cout<<ans;

}


int main (){

   // txt
    HAMED
    solve();
    return 0;
}