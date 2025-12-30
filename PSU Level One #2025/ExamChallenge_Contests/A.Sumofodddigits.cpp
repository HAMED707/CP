#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

int odd(int num) {
    int sum = 0;
    while (num > 0) {
        int digit=num%10;
        if (digit%2!=0) {
            sum+=digit;
        }
        num/=10;
    }
    return sum;
}
void solve(){
    int n;cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++) {
        int res=odd(i);
        if(res<=15)ans+=res;
    }cout<<ans;
}


int main (){

    // txt
    HAMED
    solve();
    return 0;
}