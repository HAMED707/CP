#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e6*8;
vector<bool> primes(N,true);
void sieve()
{
 for(int i=2;i<=N/i;i++)
 {
     if (primes[i])
     {
         for (ll j=i*i;j<=N;j+=i)primes[j]=false;
     }
 }
}

void solve() {
    sieve();
    int n;cin>>n;
    vector<ll>v;
    for(int i=2;i<=N;i++)
    {
        if (primes[i])v.push_back(i);
    }
   // for (auto i:v)cout<<i<<' ';
   cout<<v[n-1]<<endl;

}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}