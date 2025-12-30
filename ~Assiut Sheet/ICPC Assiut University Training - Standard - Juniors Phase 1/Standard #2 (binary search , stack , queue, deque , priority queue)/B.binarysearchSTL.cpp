
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const ll N=1e5+5;
    int n,q;
    int a[N];
bool binary_search(int target) {
    int l=0,r=n-1;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if(a[mid]==target)return 1;
        else if(a[mid]<target)l=mid+1;
        else r=mid-1;
    }
    return 0;
}

int lower_bound(int x) {
    int l=0,r=n-1,ans=-1;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if(a[mid]<x)l=mid+1;
        else ans=mid,r=mid-1;
    }
    return ans;
}
int upper_bound(int x) {
    int l=0,r=n-1,ans=-1;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if(a[mid]<=x)l=mid+1;
        else ans=mid,r=mid-1;
    }
    return ans;
}

void solve(){
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);


    while (q--) {
        string s;cin>>s;
        int x;
        cin>>x;
        if(s=="binary_search") {
            cout<<(binary_search(x)?"found":"not found")<<'\n';
        }
        else if(s=="lower_bound") {
            int ans=lower_bound(x);
            if (ans != -1) cout << a[ans] << '\n';
            else cout << -1 << '\n';
        }
        else {
            int ans=upper_bound(x);
            if (ans != -1) cout << a[ans] << '\n';
            else cout << -1 << '\n';
        }
    }

}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}