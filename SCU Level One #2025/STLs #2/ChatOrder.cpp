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

    stack<string>sk;
    while (n--) {
        string s;cin>>s;
        sk.push(s);
    }
    map<string,bool>vis;

    while (!sk.empty()) {

            if(!vis[sk.top()])cout<<sk.top()<<'\n';
            vis[sk.top()]=1;
            sk.pop();
    }

}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}