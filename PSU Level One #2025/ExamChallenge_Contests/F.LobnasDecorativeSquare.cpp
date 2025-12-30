#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    int n;cin>>n;
    vector<vector<string>>v(n,vector<string>(n,"#") );
    string c=to_string(n);
    for(int i=1;i<n-1;i++)
    for(int col=1;col<n-1;col++)v[i][col]=c;

    for(int i=0;i<n;i++) {

        for(int col=0;col<n;col++){
            cout<<v[i][col];
        }cout<<'\n';
    }
}


int main (){

    txt
    HAMED
    solve();
    return 0;
}