#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;
int x,y,ans;vector<vector<int>>a;

vector<vector<int>>memo;

int rec(int n,int m){

    if(n>=x or m>=y)return 0;

    if(n==x-1 and m==y-1)return  1;

    if(memo[n][m]!=-1) return memo[n][m];


    int choise1=rec(n+1,m);
    int choise2=rec(n,m+1);

    memo[n][m]=choise1+choise2  ;

    return memo[n][m];
}
void solve(){
    cin>>x>>y;

    memo.assign(x,vector<int>(y,-1));


    cout<<rec(1,1);
}

int main (){
    txt
    HAMED
    solve();
    return 0;
}