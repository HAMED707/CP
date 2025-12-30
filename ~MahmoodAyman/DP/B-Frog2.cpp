    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=1e9;
// int x,y,ans;

// vector<vector<int>>memo;

int n,k;
vector<int>memo;
vector<int>a;
int rec(int i){


    if(i==n-1 )return 0;

    if(~memo[i])return memo[i];

    int best=inf;
    for (int s=1;s<=k;s++)if(i+s<n)
        best= min(abs(a[i]-a[i+s])+ rec(i+s),best);

    return memo[i]=best;


}
void solve(){
    cin>>n>>k;
    a.resize(n);
    memo.assign(n+5,-1);
    for(auto& i:a)cin>>i;

    cout<<rec(0);

}

int main (){
    txt
    HAMED
    solve();
    return 0;
}