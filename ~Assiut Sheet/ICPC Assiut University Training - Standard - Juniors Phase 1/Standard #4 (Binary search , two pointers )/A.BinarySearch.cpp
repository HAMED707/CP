#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
int n;
    vector<pair<int,int>>p;
bool binaryS(int x,int y) {
    int l=0,r=n-1;
    pair<int,int>p1={x,y};
    while (l<=r) {
        int m=l+(r-l)/2;
        if(p1==p[m])return 1;
        else if(p1<p[m])r=m-1;
        else l=m+1;
    }return 0;
}
int lo(int x,int y) {
    int l=0,r=n-1,ans=-1;
    pair<int,int>p1={x,y};
    while (l<=r) {
        int m=l+(r-l)/2;

         if(p1<=p[m])r=m-1;
        else l=m+1,ans=m;
    }
    return ans;
}

int up(int x,int y) {
    int l=0,r=n-1,ans=-1;
    pair<int,int>p1={x,y};
    while (l<=r) {
        int m=l+(r-l)/2;

        if(p1<p[m])r=m-1,ans=m;
        else l=m+1;
    }
    return ans;
}

void solve(){
    int q;cin>>n>>q;
    int cnt=n;
    while (cnt--) {
        int x,y;cin>>x>>y;
        pair<int,int>p1={x,y};
        p.push_back(p1);
    }

    while (q--) {
        string s;int x,y;
        cin>>s>>x>>y;
        if(s=="find")cout<< (binaryS(x,y)?"found":"not found")<<'\n';
        else if(s=="lower")cout<<lo(x,y)<<'\n';
        else cout<<up(x,y)<<'\n';

    }
}


int main (){

     //txt
    HAMED
    solve();
    return 0;
}