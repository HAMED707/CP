#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e8;

vector<bool> prime(N+5,true);
void sieve()
{

    for(int i=2;i<=N/i;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i)
                prime[j]=false;
        }
    }
}

int GCD( int a, int b)
{
    if (b==0) return a;
    return GCD(b,a%b);
}

void solve() {
  int x,y;cin>>x>>y;
    int res=GCD(x,y);
    int cnt=0;
    for(int i=1;i*i<=res;i++)
    {
        if(res%i==0)
        {
            cnt++;
            if (res/i!=i)cnt++;
        }
    }
    cout<<cnt<<"\n";
}



int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}