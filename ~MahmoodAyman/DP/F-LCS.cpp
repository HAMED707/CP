#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=3000;
ll dp[N][N];
string s,t;

ll rec(int i,int j) {
    if(i==s.size()||j==t.size())return 0;
    ll &re=dp[i][j];
    if(~re)return re;
    if(s[i]==t[j])return re=rec(i+1,j+1)+1;

    return re=max(rec(i+1,j),rec(i,j+1));
}

void print(int i,int j) {
    if(i==s.size()||j==t.size())return;
    ll &re=dp[i][j];

    if(s[i]==t[j]) {
        cout<<s[i]; print(i+1,j+1);
    }

    if(re==rec(i+1,j))print(i+1,j);
    else if(re==rec(i,j+1))print(i,j+1);
}

void solve(){
    cin>>s>>t;
    memset(dp,-1,sizeof dp);
    rec(0,0);
    print(0,0);
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}