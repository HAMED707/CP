#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n,k,s=0;cin>>n>>k;
    vector<int>a(n);
    int sum = 0,ans=0;
    int l=0;
    for(int i=0;i<n;i++) {
        cin>>a[i],s+=a[i];
        if(s==k)ans++;
    }

    for (int r =0; r <n; r++) {
        sum += a[r];
        while (sum>k ) {
            sum-=a[l++];
        }
        if(sum==k)ans++;
    }

    cout << ans << endl;

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}