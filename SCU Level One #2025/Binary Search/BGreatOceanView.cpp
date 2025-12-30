    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int x,mx=0,ans=0;cin>>x;
    for (int i=0;i<x;i++) {
        int c;cin>>c;
        if(c>=mx)ans++;
        mx=max(mx,c);
    }cout<<ans;
}


int main (){
      //txt
    HAMED
    solve();
    return 0;
}