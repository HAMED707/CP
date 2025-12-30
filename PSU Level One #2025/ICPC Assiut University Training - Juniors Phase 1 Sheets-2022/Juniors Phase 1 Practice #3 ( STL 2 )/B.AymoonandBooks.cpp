#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    deque<int>dq(n);
    for (auto& i:dq)cin>>i;
   // for (auto& i:dq)cout<<i<<" ";
    int q;cin>>q;
    priority_queue<int>pq;
    while (q--) {
        char c;cin>>c;

            if (c == 'L') {
                if (!dq.empty()) {
                    pq.push(dq.front());
                    dq.pop_front();
                }
            } else if (c == 'R') {
                if (!dq.empty()) {
                    pq.push(dq.back());
                    dq.pop_back();
                }
            }
            else {
                if(pq.empty())cout<<-1<<'\n';
                else
                    cout<<pq.top()<<'\n',pq.pop();
               }

    }


}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}