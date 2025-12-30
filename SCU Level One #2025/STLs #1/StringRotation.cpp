#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size();

    for (int i=0;i<n;i++) {
        if(s==t)return void(cout<<"Yes");

        char tmp=s[n-1];
        s.erase(n-1);
        s=tmp+s;
    }
    cout<<"No";

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}