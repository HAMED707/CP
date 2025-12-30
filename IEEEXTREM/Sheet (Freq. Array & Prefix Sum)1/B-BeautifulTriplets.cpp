
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=1e5+5;
vector<int>freq(2e4+5,0);
void solve(){
    int n,d;cin>>n>>d;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        freq[v[i]]++;
    }
    int cnt=0;
    for(int i=0;i<n;i++) {
        int j=v[i]+d;
        int k=j+d;
        //cout<<"j::"<<j<<"k::"<<k<<'\n';
        if(freq[j]>0 and freq[k]>0) {
            cnt++;
        }
    }
    cout<<cnt;

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}