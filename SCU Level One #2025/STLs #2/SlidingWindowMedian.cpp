#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int n,k;cin>>n>>k;
        vector<int>v(n);
    for (auto& i:v)cin>>i;
    deque<int>dq;
    int idx=0;
    int c=k-1;
    while (c--) {
        dq.push_back(v[idx++]);
    }

    for (int i=k-1;i<n;i++) {
        dq.push_back(v[i]);
        deque<int>pq;
        pq=dq;
        sort(all(pq));
       // for(auto vl:pq)cout<<vl<<' ' ;
        //cout<<'\n';
        int del=((k+1)/2)-1;
        cout<<pq[del]<<' ';
        //cout<<'\n';
        dq.pop_front();
    }
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}