
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6+5;

int eulerTotient(int n)
{
    int res=n;
    for(int i=2;i*i<=n;i++)
        if (n%i==0)
            {
                while (n%i==0)
                    n/=i;
                res-=res/i;
            }
    if (n > 1)
        res -= res / n;
    return res;
}
    int tmp=0;
void solve() {

    int n; cin>>n;
    int res=eulerTotient(n);
    cout<<res<<endl;
    tmp+=res*res;
}



int main (){
    txt
    HAMED

    int t;cin>>t;
    while (t--)
        solve();
    cout<<tmp<<endl;
    return 0;
}