#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
bool prime(int x) {
    if(x==1)return false;
    if (x==2)return true;
    if (x%2==0)return false;
    for (int i=3;i*i<=x;i+=2) {
        if(x%i==0)return false;
    }
    return true;
}

void solve(){
    int n;cin>>n;
    int ans=0;
    if(n==2)ans=1;
    else if(n%2==0)ans=2;
    else if(prime(n))ans=1;
    else if(prime(n-2))ans=2;
    else ans=3;

    for (int i=2;i*i<=n;i++) {
        for (int j=2;j*j<=n;j++) {
            for (int k=2;k*k<=n;k++) {
                int a=i*(ans>=1);
                int b=j*(ans>=2);
                int c=k*(ans>=3);
              if(prime(a) and prime(b)  and prime(c) and a +b +c==n)
                  cout<<ans<<'\n'<<a<<" "<<c<<" "<<c;
            }
        }
    }
}

int main (){
    txt
    HAMED
    solve();
    return 0;
}