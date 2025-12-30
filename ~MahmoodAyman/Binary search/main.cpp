
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
        int x;cin>>x;

    int l=-1,r=n;

        while (l+1<r) {
        int mid=(l+r)/2;
            if(a[mid]<=x){l=mid;}
            else r=mid;
        }
        cout<<l+1;
    return 0;
}
