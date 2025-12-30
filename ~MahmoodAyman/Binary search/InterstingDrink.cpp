
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,arr[N];
int binarySearch(int x) {
    int ans=-1;
    int l=0,r=n-1;
    while (l<=r) {
        int mid=l+r>>1;
        if(arr[mid]<=x) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans+1;
}


int main() {
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int q;cin>>q;
    while (q--) {
        int x;cin>>x;
        cout<<binarySearch(x)<<'\n';
    }
    return 0;
}
