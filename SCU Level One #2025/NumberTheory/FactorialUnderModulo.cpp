
#include <bits/stdc++.h>
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
using namespace std;
#define ll long long

const ll N=998244353;
const int MAX = 1e5+5 ;

vector<ll>fact(MAX,-1);

ll precompute_RECURIONvERSION(int i) {
   if(i==0 || i==1)return fact[i]=1;
    if(fact[i]!=-1)return fact[i];
    fact[i]=(i*precompute_RECURIONvERSION(i-1))%N;
    return fact[i];
}

//ll fact[MAX];
void precompute_DPvERSION() {
    fact[0] = 1;
    fact[1]=1;
    for (int i = 2; i < MAX; ++i) {
        fact[i] = (fact[i - 1] * i) % N;
    }
}


void solve() {
    int n;cin>>n;
    precompute_RECURIONvERSION(n);
    cout<<fact[n];
}
int main (){
//txt
HAMED
solve();
return 0;
}