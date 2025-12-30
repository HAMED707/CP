
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long

const ll N=1e6;
const int MAX = 1e5+5 ;

vector<ll>fact(N+1);

void fac() {
    fact[0] = 1;
    fact[1]=1;
    for (int i = 2; i <= N; ++i) {
        fact[i] = (fact[i - 1] * i) ;
    }
}


void solve() {
    fac();
    int n;
    while (cin>>n)
    {
        ll x=fact[n];

        cout<<x<<' ';

        map<ll,ll>mp;
        for(ll i=2;i*i<=x;i++){
            
            if(x%i==0){
                while (x%i==0)
                {
                    x/=i;
                    mp[i]++;
                }
            }
        }
        if(x>1)mp[x]++;

            ll ans=0;
            for(auto& [x,y]:mp)ans+=y;

            cout<<ans<<'\n';
    }

   
    
    
    
}
int main (){
txt
HAMED
solve();
return 0;
}