#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()

 using namespace std;
const int N=2e5+5;

void solve(){
    int n,d;cin>>n>>d;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
    sort(all(v));
    ll sum=0,mx=INT_MIN;
    int l=0;
    for(int r=0;r<n;r++) {
        sum+=v[r].second;

        while ((v[r].first - v[l].first)>=d) {
            sum-=v[l].second;
            l++;
        }
        mx=max(mx,sum);
    }
    cout<<mx;

}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}