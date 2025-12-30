
#include <bits/stdc++.h>

using namespace std;
int can(int x){return (x*(x+1))/2;}
int main() {
  int sum;cin>>sum;
    int l=0,r=5000,n=-1;
    while (l<=r) {
        int mid=l+r>>1;
        int x=can(mid);
        if(x==sum){n=mid;break;}
        else if(x<sum)l=mid+1;
        else r=mid-1;
    }
    cout<<n;
    return 0;
}
