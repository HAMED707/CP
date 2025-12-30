
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6+5;


void solve() {
ll a,b;
    while (cin>>a>>b)
    {
        ll d=__gcd(a,b);

            for (ll i=0;i<b;i++)
            {

                if ((a*((d-b*i)/a)+b*i)==d)
                {
                    cout << i << " " << (d-b*i)/a << ' ' << __gcd(a, b) << endl;
                    break;
                }
            }

    }
}



int main (){
    //txt
    HAMED
        solve();
    return 0;
}