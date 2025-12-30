#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;
int n;


void solve(){

    cin>>n;
    vector<int>a(n);for (auto& i:a) cin>>i;


    int g=0;
    for (int i=0;i<n/2;i++)
    {
        g=__gcd(g,abs(a[i]-a[n-1-i]));
    }cout<<g<<endl;
}


int main (){

    // txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}