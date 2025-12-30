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
    fill
    for(int i=2;i<=N/i;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i)
                prime[j]=false;
        }
    }
}

void solve() {
    sieve();
    int count = 0;

    if (prime[2]) {
        count++;
        if (count % 100 == 1)
            cout << 2 << '\n';
    }

    for (int i = 3; i < N; i += 2) {
        if (prime[i]) {
            count++;
            if (count % 100 == 1)
                cout << i << '\n';
        }
    }
}



int main (){

   // txt
    HAMED
    solve();
    return 0;
}