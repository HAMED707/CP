
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6;

bool notZero(int n)
{
    while(n)
    {
        if (n%10==0)return false;
        n/=10;
    }
    return true;
}

vector<bool>prime(N+1,true);
vector<int> primeNoZeroCount(N+1);
void sieve()
{
    prime[0] = prime[1] = false;

    for (int i=2;i*i<=N;i++)
        if (prime[i])
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;


    for (int i = 2; i <= N; i++) {
        primeNoZeroCount[i] = primeNoZeroCount[i - 1];
        if (prime[i] && notZero(i)) {
            primeNoZeroCount[i]++;
        }
    }
}

void solve() {
    int n; cin>>n;
    if(n==1)return void(cout<<0<<endl);

        cout<<primeNoZeroCount[n]<<endl;


}



int main (){
   //txt
    HAMED
    sieve();
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}