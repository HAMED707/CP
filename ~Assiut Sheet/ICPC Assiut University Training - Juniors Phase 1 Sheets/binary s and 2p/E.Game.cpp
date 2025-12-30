#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
int n,q;
int a[N];
int upperbound(int x) {
    int l=0,r=n-1,ans=-1;
    while (l<=r) {
        int m=l+(r-l)/2;
        if(a[m]>x)r=m-1,ans=m;
        else l=m+1;
    }
    return ans;

}

void solve(){

    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>a[i];
    while (q--) {
        int x;cin>>x;
        if(upperbound(x)==-1)cout<<-1<<endl;
        else cout<<a[upperbound(x)]<<endl;
    }
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}