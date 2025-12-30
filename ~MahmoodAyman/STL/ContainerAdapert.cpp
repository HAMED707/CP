#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
 using namespace std;
const int N=1e5+5;

void solve(){

   stack<int>sk;//undo , redo //filo
    //sk.push(1);
    //sk.push(2);
    //sk.push(4);
    //sk.push(78);
        //sk.pop();
    cout<<sk.top()<<'\n';
    cout<<sk.empty();

    //
       // queue<int>q;//fifo
    // q.push(5);
    // q.push(3);
    // q.push(1);
    // q.pop();
    // cout<<q.front();

    //

    //priority_queue<int>pq;//store elements sorted
    // priority_queue<int,vector<int>,greater<int>>pq;//store elements sorted reversly
    // pq.push(3);
    // pq.push(2);//O(log(n))
    // pq.push(5);
    // pq.push(1);
    // pq.push(4);
    //
    // while (!pq.empty()) {
    //     cout<<pq.top()<<'\n';//O(1)
    //     pq.pop();
    //}
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}