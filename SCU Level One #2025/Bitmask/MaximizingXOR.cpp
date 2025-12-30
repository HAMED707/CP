#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    ll l,r;cin>>l>>r;

    bitset<64>x(l);
    bitset<64>y(r);
    bitset<64>res;

    bool flag=1;
    for (int i=63;i>=0;i--) {

        if(x[i]==0&&y[i]==1 && flag==1) {
            res[i]=1;
            flag=0;
        }
        // else if(x[i]==1&&y[i]==1 && flag==1) {
        //     res[i]=0;
        // }
        else if(flag==0) res[i]=1;
    }
    cout<<res.to_ullong();

}

int main (){

   // txt
   HAMED
   solve();
    return 0;
}