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
    int ans=0;
    while (n--) {
        string s;cin>>s;
        if(s[0]=='+' or s[2]=='+')ans++;
        else ans--;
    }
    cout<<ans;
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}