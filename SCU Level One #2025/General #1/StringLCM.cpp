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
    if(s.size()<t.size())swap(s,t);
    int a=s.size(),b=t.size();
    int lc=lcm(a,b);
    string ss=s,tt=t;
    while (s.size()<lc)s+=ss;
    while (t.size()<lc)t+=tt;

    if(s.size()==lc and s==t)cout<<s<<'\n';
    else cout<<-1<<'\n';



}


int main (){
   // txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}