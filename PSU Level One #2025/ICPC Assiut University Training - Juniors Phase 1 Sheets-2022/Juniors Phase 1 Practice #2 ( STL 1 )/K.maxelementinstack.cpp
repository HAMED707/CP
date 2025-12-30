#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
  int q;cin>>q;
    stack<pair<ll,ll>>s;

        ll mx=INT_MIN;
    while (q--) {
        ll o,x;cin>>o;
        if(o==1) {
            cin>>x;
            mx=max(mx,x);
            pair<int,int>p={x,mx};
            s.push(p);
           // cout<<x<<" "<<mx<<'\n';
        }else s.pop();

       cout<<s.top().second<<'\n';

    }
}


int main (){
  // txt
    HAMED
    solve();
    return 0;
}