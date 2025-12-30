#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;
vector<pair<int,int>>freq(N);
void solve() {
   int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        vector<int>del;
        for (int i=0;i<n;i++) {
            int x;cin>>x;
            freq[x].first++;
            freq[x].second=i+1;
            del.push_back(x);
        }
        for (int i=0;i<=100;i++) {
            if(freq[i].first==1)cout<<freq[i].second<<'\n';
        }
        for (auto& i:del)freq[i].first=freq[i].second=0;
    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}