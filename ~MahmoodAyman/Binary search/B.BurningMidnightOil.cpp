
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,k;
bool can(int mid) {
    int sum=mid;
    while (mid){
        sum+=mid/k;
        mid/=k;
    }
    return sum>=n;
}
int binarySearch() {
    int ans=n;
    int l=1,r=n;
    while (l<=r) {
        int mid=l+r>>1;
        if(can(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}


int main() {
    cin>>n>>k;
    cout<<binarySearch();

    return 0;
}
