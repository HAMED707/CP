
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1000+5;
    string s;int n;
    int dp[N][N];
ll rec(int l=0,int r=n-1) {
    if(l>=r)return 0;
    if(~dp[l][r])return dp[l][r];
    if(s[l]==s[r])return dp[l][r]=rec(l+1,r-1);

    return dp[l][r]=min({rec(l+1,r),rec(l,r-1)})+1;
}

void print (int l=0,int r=n-1) {
    if(l>r)return;
    if(l==r) {
        cout<<s[l];return;
    }

    if(s[l]==s[r]) {
        cout<<s[l];
        print(l+1,r-1);
        cout<<s[r];
        return;
    }
    if(dp[l][r]==rec(l+1,r)+1) {
        cout<<s[l];
        print(l+1,r);
        cout<<s[l];
    }
    else {
        cout<<s[r];
        print(l,r-1);
        cout<<s[r];
    }

}

void solve(){
    n=s.size();
    for(int i=0;i<=n;i++)for(int o=0;o<=n;o++)dp[i][o]=-1;
    cout<<rec()<<' ';
    print();
    cout<<'\n';

}

int main (){

    txt
    HAMED
   // int t;cin>>t;
    while(cin>>s)solve();
    return 0;
}