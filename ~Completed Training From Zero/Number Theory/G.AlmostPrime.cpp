#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve() {
    int n,ans=0;cin>>n;
    for (int i=6;i<=n;i++) {
        int x=i,a=0;
        for (int j=2;j*j<=x;j++) {
            if(x%j==0){
                a++;
            while(x%j==0) {
                x/=j;
            }
        }
        }
        if(x>1)a++;
        if(a==2)ans++;
    }
    cout<<ans;

}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}