#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int t;cin>>t;
    queue<int>q;
    while (t--) {
        int x,a;cin>>x;
        if(x==1)cin>>a,q.push(a);

        else if(x==2) {
            if(!q.empty())
                q.pop();
        }

        else {
            if(!q.empty()) {
                cout<<q.front()<<'\n';
            }else {
                cout<<"Empty!"<<'\n';
            }
        }
    }


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}