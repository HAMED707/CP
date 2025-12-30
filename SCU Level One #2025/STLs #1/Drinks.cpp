#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int n;
    double s=0;cin>>n;
    double x,a=n;
    while (n--)cin>>x,s+=x;
    printf("%.12lf",s/a);
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}