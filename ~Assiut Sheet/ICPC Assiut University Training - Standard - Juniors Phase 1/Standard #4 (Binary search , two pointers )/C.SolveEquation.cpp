#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;



void solve(){
    double c,t;
    cin>>c>>t;
    double l=0,r=t,ans=0;
    while ( r-l > 1e-6) {
        double m=l+(r-l)/2;

        double res=c*m*log2(m);

        if(fabs(res-t)<1e-6){cout << fixed << setprecision(16) << m;return;}
        else if(res<t)l=m;
        else r=m ;
    }
    cout << fixed << setprecision(6) << (l+r)/2 << endl;
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}