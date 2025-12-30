    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;



void solve(){
   int n,m;cin>>n>>m;
    int h,w;cin>>h>>w;
    int ans=(n*m)-(h*m+w*abs(h-n));
   // cout<<(n*m)<<' '<<h*m<<" "<<h*w<<" "<<w*n<<'\n';
    cout<< ans;
}


int main (){
    // txt
    HAMED
    solve();
    return 0;
}