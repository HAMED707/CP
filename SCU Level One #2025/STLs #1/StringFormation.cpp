#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    string s;cin>>s;
    int q;cin>>q;
    bool rv=0;
    while (q--) {
        int o,d;char c;
        cin>>o;
        if(o==1)rv=!rv;
        else {
            cin>>d>>c;
            if(d==1 and !rv)s=c+s;
            else if(d==1 and rv) s+=c;
            else if(d==2 and !rv)s+=c;
            else  s=c+s;
        }
    }
    if(rv)reverse(all(s));
    cout<<s;
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}