#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int x,y;cin>>x>>y;


    for (int i=0;i<=30;i++) {
        if ((x & (1 << i)) != (y & (1 << i))) {
            cout << (1 << i) << "\n";
            break;
        }

    }
}

int main (){

   // txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}