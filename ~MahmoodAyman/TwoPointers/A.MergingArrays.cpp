#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define all(X) X.begin(),X.end()
#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m),ans;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0,j=0;
    while (i<n or j<m) {
        if(j==m or (i<n and a[i]<b[j]) ) {
            cout<<a[i++]<<" ";
        }
        else {
            cout<<b[j++]<<" ";
        }
    }

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}