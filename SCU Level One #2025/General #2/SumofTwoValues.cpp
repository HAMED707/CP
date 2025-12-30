#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;





void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());

    int l=0,r=n-1;
    while (l<r) {
        if(v[l].first+v[r].first>k)r--;
        else if(v[l].first+v[r].first<k)l++;
        else{
           return void(cout<<v[l] .second<<' '<<v[r].second);
        }
    }
        cout<<"IMPOSSIBLE";
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}