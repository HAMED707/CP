#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define all(X) X.begin(),X.end()
#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){cin>>v[i].first;v[i].second=i;}
        sort(all(v));
    int l=0;
    for(int r=n-1;r>l;r--) {
        while (l < r && v[l].first+v[r].first<k) {
            l++;
        }

        if(v[l].first+v[r].first==k) {
            return void(cout<<v[l].second+1<<" "<<v[r].second+1);
        }
    }
    cout<<-1;


}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}