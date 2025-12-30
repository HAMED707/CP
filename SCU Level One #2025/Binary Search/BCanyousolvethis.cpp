    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;



void solve(){
   int n,m,c;cin>>n>>m>>c;
    int a[m];for (auto&i:a)cin>>i;
    int arr[n][m];
    for (int i=0;i<n;i++)for (int j=0;j<m;j++)cin>>arr[i][j];
    int ans=0;
    for (int i=0;i<n;i++) {
            int sum=0;
        for (int j=0;j<m;j++) {
            sum+=a[j]*arr[i][j];
        }
        sum+=c;
        if(sum>0)ans++;
    }
    cout<<ans;
}


int main (){
    //txt
    HAMED
    solve();
    return 0;
}