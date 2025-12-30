
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long

const ll N=1e3;
const int MOD = 1e9+7;

vector<int> primeFac(int n){
    vector<bool>prime(n+1,1);
    vector<int>primes;
    prime[0]=prime[1]=0;

    for (int i = 2; i * i <= n; i++)
        if(prime[i]){
            for (int j= i+i; j <= n; j+=i)
                prime[j]=0;
        }

    
    for(int i = 2; i <= n; ++i)if(prime[i])primes.push_back(i),cout<<i<<'\n';
    
    return primes;
}

ll LegendresFormula(int n){
    vector<int>primes=primeFac(n);
    
    ll exp=1;
    
    for(auto p:primes){
        int tmp=n;
        int res=0;

        while(tmp){
            tmp/=p;
            res+=tmp;
        }

        exp=(exp*(res+1));
    }

    return exp;
}
 


void solve() {
    int n;cin>>n;

    cout<<LegendresFormula(n);
    //for(auto s:st)cout<<s<<' ';
}

int main (){
txt
HAMED
solve();
return 0;
}