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
    if(n==2)cout<<1;
    else if(n%2==0)cout<<2;
    else if(prime(n))cout<<1;
    else if(prime(n-2))cout<<2;
    else cout<<3;
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}