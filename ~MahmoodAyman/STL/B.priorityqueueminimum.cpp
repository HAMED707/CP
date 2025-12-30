#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
 using namespace std;
const int N=1e5+5;

// void solve(){
//
//     int q;cin>>q;
//     priority_queue<int,vector<int>,greater<int>>pq;
//     while (q--) {
//         string s;cin>>s;
//         int x;
//         if(s=="push") {
//             cin>>x;
//             pq.push(x);
//         }
//         else if(s=="top")cout<<pq.top()<<'\n';
//         else pq.pop();
//     }
// }

void solve(){

    int q;cin>>q;
    priority_queue<int,vector<int>,greater<int>>pq;


    pq.push(1);
    pq.push(24);
    pq.push(56);
    pq.push(89);
    pq.push(0);

    while (!pq.empty()) {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}