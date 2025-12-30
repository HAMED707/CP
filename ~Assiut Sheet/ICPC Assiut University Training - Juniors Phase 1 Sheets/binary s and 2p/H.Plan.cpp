#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve(){
    int n,q;cin>>n>>q;
    pair<int,int> a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);

    while (q--){
        int x;cin>>x;
        int l=0,r=n-1,ans=-1;
        while (l<=r) {
            int m=l+(r-l)/2;
            if(a[m].first==x) {
                ans=m;
                break;
            }
            else if(a[m].first>x)r=m-1;
            else l=m+1;
        }
        if(ans==-1)cout<<"No"<<endl;
        else cout<<"Yes "<<a[ans].second+1<<endl;
    }
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}