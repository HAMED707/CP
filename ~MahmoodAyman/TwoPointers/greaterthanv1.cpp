#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define all(X) X.begin(),X.end()
#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int idx=1,mx=INT_MIN;
    for(int i=0;i<n;i++) {
        cout<<"idx "<<idx<<" arr "<<a[i]<<'\n';
        if(idx<=a[i]) {
            idx++;
        }
        else {
            mx=max(idx,mx);
            idx=a[i];
        }
       // mx=max(idx,mx);

    }
    cout<<mx;

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}