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
    vector<int>a(n);
    for (auto& i:a)cin>>i;


    // for (auto& i:a) {
    //     cout<<i<<" ";
    // }

    vector<stack<int>>v;

    stack<int> b;
    b.push(a[0]);
    v.push_back(b);

     //cout<<v[0].top()<<" ";
    for (int i=1;i<n;i++) {

        bool flg=0;

        for (int j=0;j<v.size();j++) {
            if(a[i] < v[j].top()) {
                v[j].push(a[i]);
                    flg=1;
                break;
            }
        }

        if(!flg) {
            stack<int> b;
            b.push(a[i]);
            v.push_back(b);
        }

    }
    cout<<v.size();

    // for (auto& i:v) {
    //     cout<<i.top()<<" ";
    // }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}