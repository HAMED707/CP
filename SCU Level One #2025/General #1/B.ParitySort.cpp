#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
int c=1;


void solve(){
    int n;cin>>n;
    int a[n],b[n];

    for (int i=0;i<n;i++) cin>>a[i],b[i]=a[i];
    sort(b,b+n);

    for (int i=0;i<n;i++) {
        if(a[i]%2!=b[i]%2)return void( cout<<"NO\n");
    }
    cout<<"YES\n";
}


int main (){

    //txt
    HAMED
    int t;cin>>t;

    while (t--)solve();
    return 0;
}