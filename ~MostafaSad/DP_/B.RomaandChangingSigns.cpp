#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;
int n,k,a[N];




void solve(){
    cin>>n>>k;
    int sum=0,mini=INT_MAX;
    for (int i=0;i<n;i++)cin>>a[i];

    for(int i=0;i<n;i++) {
        if(a[i]<0 and k>0) {
            a[i]*=-1;k--;
        }
        sum+=a[i];
        mini=min(mini,a[i]);
    }
    if(k%2==1)sum-=2*mini;
    cout<<sum;

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}