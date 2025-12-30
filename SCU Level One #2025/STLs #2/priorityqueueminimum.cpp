#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;

void solve() {

    int q;cin>>q;
    priority_queue<int,vector<int>,greater<int>>pq;
    while (q--) {
        int x;
        string s;cin>>s;
        if(s=="push")cin>>x,pq.push(x);
        else if(s=="pop")pq.pop();
        else
            cout<<pq.top()<<'\n';
    }

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}