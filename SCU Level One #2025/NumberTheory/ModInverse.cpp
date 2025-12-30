
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e6+5;


void solve() {

    int x,m;cin>>x>>m;

    for(int i=1;i<m;i++)
    {
        if ((x*i)%m==1)return void(cout<<i);
    }

    return void(cout<<"No such integer exists.");

}



int main (){
    //txt
    HAMED
    solve();
    return 0;
}