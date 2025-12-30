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
    int len=0,mx=0;
    for (auto&i:s) {
        if(i=='A' or i=='C' or i=='G' or i=='T')len++;
        else {
            mx=max(len,mx);
            len=0;
        }

    }
    mx = max(len, mx);
    cout<<mx;
}


int main (){
   // txt
    HAMED
    solve();
    return 0;
}