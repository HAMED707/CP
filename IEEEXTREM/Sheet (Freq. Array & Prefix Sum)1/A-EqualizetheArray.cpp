#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=105;
int freq[N];
void solve(){
    int n;cin>>n;
    int x,mx=INT_MIN;
    for(int i=0;i<n;i++)cin>>x,freq[x]++,mx=max(mx,freq[x]);
    cout<<(n-mx);
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}