
#include <bits/stdc++.h>

using namespace std;
int a[100005];
int upper(int l,int r,int x) {
    while (l+1<r) {
        int mid=(l+r)/2;
        if(a[mid]<x) {
            l=mid;
        }else r=mid;
    }
    return r+1;
}
int lower(int l,int r,int y) {
    while (l+1<r) {
        int mid=(l+r)/2;
        if(a[mid]<=y) {
            l=mid;
        }else r=mid;
    }
    return l+1;
}
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int q;cin>>q;
    sort(a,a+n);

    while (q--) {
        int l=-1,r=n;
        int x,y;
        cin>>x>>y;
       cout<< (lower(l,r,y)-upper(l,r,x))+1 <<" ";

    }
    return 0;
}
