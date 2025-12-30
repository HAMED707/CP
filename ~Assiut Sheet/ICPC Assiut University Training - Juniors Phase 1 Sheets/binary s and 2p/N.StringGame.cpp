#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
    string k,p;
    int pos[N];
bool good(int m) {
    string s="";
    for (int i)

}

void solve(){
 cin>>k>>p;

    int sz=max(k.size(),p.size());
    for (int i=0;i<sz;i++)cin>>pos[i];

    int l=0,r=sz,ans=0;

    while (l<=r) {
        int m=l+(r-l)/2;
        if(good(m))ans=m,l=m+1;
        else r=m-1;
    }


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}