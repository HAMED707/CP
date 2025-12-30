#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
   map<int,int>mp;
    int n;cin>>n;
    while (n--) {
        int a,c;cin>>a>>c;
        if(mp[c]==0){mp[c]=INT_MAX;}
        mp[c]=min(mp[c],a);
    }
    int mx=INT_MIN;
    for (auto & [x,y]:mp) {
        mx=max(mx,y);
    }
        cout<<mx<<'\n';

}


int main (){

   // txt
    HAMED
    solve();
    return 0;
}