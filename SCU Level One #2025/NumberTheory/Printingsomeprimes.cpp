#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;
bool pr(int x) {
    if(x==1)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;

    for (int i=3;i<=x/i;i+=2) {
        if(x%i==0)return 0;
    }return 1;

}
void solve(){
    cout<<2<<'\n';
    for (int i=3;i<=1e8;i+=2) {
       if(pr(i))cout<<i<<'\n';
    }

    for (int i=3;i<=1e8/i;i+=2) {
        if(x%i==0)return 0;
    }return 1;
}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}