#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
bool vis[101]{};
void solve() {

        int n;cin>>n;
    string s;cin>>s;
        deque<int>dq;
    dq.push_back(n);
        for (int i=n-1;i>=0;i--) {
            if(s[i]=='R')dq.push_front(i);
            else dq.push_back(i);
        }
    for (auto& i:dq)cout<<i<<' ';

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}