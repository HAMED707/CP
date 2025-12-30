#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int x;cin>>x;
    vector<int>a(x);
    for (auto&i:a)cin>>i;

    int res=a[0],g=1;
    for (int i=0;i<x;i++) {
        res&=a[i];
        if(res==0) {
            if(i==x-1)break;
            g++;
            res=a[i+1];
        }
    }
    if(res!=0)g--;

    cout<<max(g,1)<<'\n';
}

int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}