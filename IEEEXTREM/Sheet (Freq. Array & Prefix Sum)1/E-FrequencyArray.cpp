
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=1e5+5;
int freq[N];
void solve(){
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;
        int x;vector<int>del;
        bool ans=1;
        for(int i=0;i<n;i++) {
            cin>>x,freq[x]++;
            if(freq[x]>1) ans=0;
            del.push_back(x);
        }
        cout<<(ans?"prekrasnyy":"ne krasivo") <<'\n';
        for(auto& i:del)freq[i]=0;
    }
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}