#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int q;cin>>q;
    deque<int>dq;
    while (q--) {

        int sum=0;

        int c;cin>>c;
        int x,n;
        if(c==1) {
            cin>>x>>n;
            while (n--)dq.push_back(x);
        }else {
            cin>>n;
            while (n--)if(!dq.empty())sum+=dq.front(),dq.pop_front();
            cout<<sum<<'\n';
        }
    }

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}