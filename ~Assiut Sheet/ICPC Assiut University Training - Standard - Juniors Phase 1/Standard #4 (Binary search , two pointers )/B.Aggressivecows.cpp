#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


int n,c;
vector<int>a;
bool ok(int m) {
    int res=1,r=1;
    int x=a[0];
    for (;r<n;r++) {
        if (a[r]-x>=m) {
            res++;
            x=a[r];
        }
    }
    return (res>=c);
}
void solve(){
    cin>>n>>c;
    a.resize(n);
    for (auto&i:a)cin>>i;
    sort(all(a));
    int l=0,r=a[n-1]-a[0],ans=0;
    while (l<=r) {
        int m=l+(r-l)/2;
        if(ok(m))l=m+1,ans=m;
        else r=m-1 ;
    }cout<<ans;

}



int main (){

      txt
    HAMED
    solve();
    return 0;
}