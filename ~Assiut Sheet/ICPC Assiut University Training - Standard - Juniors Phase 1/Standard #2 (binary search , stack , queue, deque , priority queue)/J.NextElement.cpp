
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define all(X) X.begin(),X.end()

using namespace std;
const ll N=1e5+5;

void solve() {
    int n;cin>>n;
    int a[n];for (auto&i:a)cin>>i;
    map<int,int>mp;

    stack<int>st;

    for (int i=0;i<n;i++) {
        mp[i]=-1;
            while(!st.empty() and a[st.top()]<a[i]) {
               mp[st.top()]=i+1;
                st.pop();
            }
        st.push(i);
    }

    int q;cin>>q;
    while (q--) {
        int x;cin>>x;
       cout<<mp[x-1]<<'\n';
    }
    //for(auto&i:mp)cout<<i.first-1<<" "<<i.second<<'\n';
}



int main (){

   //txt
    HAMED
    solve();
    return 0;
}