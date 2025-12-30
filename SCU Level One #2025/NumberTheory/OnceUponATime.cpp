
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6+5;


void solve() {
    int n,m,a,k;
    while(cin>>n>>m>>a>>k)
    {   if (n==0 && m==0 && a==0 && k==0)break;
        int w=n,man=k+a;

        while (true)
        {
            if (w==man){cout<<w<<'\n';break;}
            while (w>man)man+=a;
            while (w<man) w+=m;

        }

    }
}



int main (){
    //txt
    HAMED
        solve();
    return 0;
}