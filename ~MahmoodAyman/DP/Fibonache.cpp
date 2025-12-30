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

vector<int>memo;

int fib(int x){

    if(x<=1)return x;

    if(memo[x]!=-1) return memo[x];


    int f=fib(x-1)+fib(x-2);

    memo[x]=f  ;
    return memo[x];
}
void solve(){
    cin>>x;

    memo.assign(1001,-1);


    cout<<fib(x);
}

int main (){
    txt
    HAMED
    solve();
    return 0;
}