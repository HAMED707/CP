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

    if(n>=x or m>=x or m<0 or n<0)return inf;

    if(n==x-1 and m==x-1)return  a[n][m];

    if(memo[n][m]!=-1) return memo[n][m];


    int choise1=rec(n+1,m+1)+ a[n][m];
    int choise2=rec(n+1,m-1)+ a[n][m];

    memo[n][m]=max(choise1,choise2);

    return memo[n][m];
}
void solve(){
    cin>>x;
    a.assign(x,vector<int>(x));
    memo.assign(x,vector<int>(x,-1));
    for (int i=0;i<x;i++)for(int j=0;j<x;j++)cin>>a[i][j];

    cout<<rec(0,0);
}

int main (){
    txt
    HAMED
    solve();
    return 0;
}