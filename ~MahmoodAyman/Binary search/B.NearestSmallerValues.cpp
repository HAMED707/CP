
#include <bits/stdc++.h>

using namespace std;
int can(int min) {
    for(int=)
}
int main() {
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    while (q--) {
        int l=-1,r=n,ans=0;
        int x;cin>>x;
        while (l+1<r) {
            int mid=(l+r)/2;
            if(a[mid]<x) {
                l=mid;

            }else r=mid;
        }
        cout<<r +1<<'\n';
    }
    return 0;
}
