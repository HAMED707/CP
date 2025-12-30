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
    while (n--) {
        int x;cin>>x;
        bool c=1;
        for (int i=1;i<=26 and c;i++)
        for (int j=1;j<=26 and c;j++)
        for (int k=1;k<=26;k++) {
            if(i+j+k==x) {
                cout<<char(i-1+'a')<<char(j-1+'a')<<char(k-1+'a')<<'\n';
                c=0;
                break;
            }
        }
    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}