#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

vector<bool>primes(N+1,1);

void sieve(){

    primes[0]=primes[1]=0;

    for (int i = 2; i * i <= N; i++)
        if(primes[i]){
            for (int j= i+i; j <= N; j+=i)
                primes[j]=0;
        }    
}


map<ll,int> LegendresFormula(int n,vector<int>primes){
    map<ll,int>mp;
    for(auto p:primes){
        int tmp=n;
        int res=0;
        while(tmp){
            tmp/=p;
            res+=tmp;
        }
        mp[p]=res;
    }
    return mp;
}

// Factorize m and count the exponent of each prime in m
map<ll,int> factorize_m(ll m) {
    map<ll,int> mp;
    for(ll i=2; i*i<=m; ++i) {
        while(m%i==0) {
            mp[i]++;
            m/=i;
        }
    }
    if(m>1) mp[m]++;
    return mp;
}


void solve(){
    
    ll n , m;
    
    sieve();

    while (cin>>n>>m)
    {
        if (m == 0) {
            cout << m << " does not divide " << n << "!\n";
            continue;
        }
        
        vector<int>prime;
            for(int i = 2; i <= n; ++i)if(primes[i])prime.push_back(i);
        
        map<ll,int>mp_n= LegendresFormula(n,prime);
        map<ll,int>mp_m= factorize_m(m);
        bool flag=1;
        for(auto& [x,y]:mp_m){
            if(mp_n[x]<y){
                cout<<m<<" does not divide "<<n<<"!\n";
                flag=0;
                break;
            }
        }
        if(flag)cout<<m<<" divides "<<n<<"!\n";
    }
    
    
}


int main (){

//    txt 
    HAMED
    solve();
    return 0;
}