#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2*(1e5)+5;
ll n,k,arr[N];
/*
 3 2
1 3 5
*/
// bool can(ll x) {
//     ll sum=0;
//     for(int i=n/2;i<n;i++) {
//         if(arr[i]<x)sum+=x-arr[i];
//     }
//     return sum<=k;
// }
bool can(ll x) {
    ll sum=0;
    for(int i=n/2;i<n;i++) {
        sum+=max(0LL,x-arr[i]);
    }
    return sum<=k;
}
int binarySearch() {
    ll ans=arr[n/2];
    ll l=arr[n/2],r=arr[n/2]+k;
    while (l<=r) {
        ll mid=l+r>>1;
        if(can(mid)) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}


int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cout<<binarySearch();


    return 0;
}
