#include <bits/stdc++.h>
 
#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
 
 
#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
 
 
 using namespace std;
const int N=105;
 
void solve() {
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        priority_queue<int>pq;
        priority_queue<int>stor;
        while (n--) {
            int x;cin>>x;
            pq.push(x);
        }

        while (!pq.empty()) {
            stor.push(pq.top());
            if(pq.top()!=1)pq.push(pq.top()/2);
            pq.pop();
        }
        while (!stor.empty()) {
            cout<<stor.top()<<' ';
            stor.pop();
        }
        cout<<'\n';
    }

 
}
 
int main (){
 
   // txt
    HAMED
    solve();
    return 0;
}