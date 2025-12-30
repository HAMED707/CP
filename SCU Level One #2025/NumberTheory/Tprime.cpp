
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long

const ll N=1e6+3;
const int MOD = 1e9+7;

vector<bool>prime(N,1);
void seive(){

    prime[0]=prime[1]=0;
    for (ll i = 2; i * i <= N; i++)
        if(prime[i]){
            for (ll j= i+i; j <= N; j+=i)
                prime[j]=0;
        }
}


bool sqroot(ll n){
    ll x=sqrt(n);
    return x*x==n && prime[x];
}

void solve() {
   seive();
    int n;cin>>n;
    ll arr[n];for(auto& i:arr)cin>>i;

    for (int i = 0; i < n ; i++)
    {

        if(sqroot(arr[i]))
            cout<<"YES\n";
        else 
            cout<<"NO\n";
        
        
    }
     
}

int main (){
// txt
HAMED
solve();
return 0;
}