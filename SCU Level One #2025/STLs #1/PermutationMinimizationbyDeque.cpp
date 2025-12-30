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

        int x;cin>>x;
        deque<int>dq;
        for(int i=0;i<x;i++) {
            int a;cin>>a;
            if(dq.empty() or a<dq[0])dq.push_front(a);
            else dq.push_back(a);
        }
        for (auto& i:dq)cout<<i<<' ';
    cout<<'\n';

}

int main (){

   // txt
    HAMED
    int n;cin>>n;
    while (n--) {

        solve();
    }
    return 0;
}