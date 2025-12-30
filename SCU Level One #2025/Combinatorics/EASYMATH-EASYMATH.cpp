#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;

ll gcd(ll a,ll b) {
    while (b) {
        a%=b;
        swap(a,b);
    }
    return a;
}


ll lcm(ll a,ll b) {
    return (a*b)/gcd(a,b);
}

void solve(){
    ll l,r,a,b;cin>>l>>r>>a>>b;
    ll divi[5]={a,a+b,a+2*b,a+3*b,a+4*b};
    ll ans=0;
    for (int i1=0;i1<2;i1++)
    for (int i2=0;i2<2;i2++)
    for (int i3=0;i3<2;i3++)
    for (int i4=0;i4<2;i4++)
    for (int i5=0;i5<2;i5++) {
        ll d=1,cnt=0;

        if(i1)d=lcm(d,divi[0]),cnt++;
        if(i2)d=lcm(d,divi[1]),cnt++;
        if(i3)d=lcm(d,divi[2]),cnt++;
        if(i4)d=lcm(d,divi[3]),cnt++;
        if(i5)d=lcm(d,divi[4]),cnt++;

        if(!cnt)continue;
            int sign= (cnt%2==1?1:-1);
        ans+=sign*((r/d)-((l-1)/d));
    }

    cout<< (r-l+1) - ans<<'\n';
}

int main (){
    // txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}