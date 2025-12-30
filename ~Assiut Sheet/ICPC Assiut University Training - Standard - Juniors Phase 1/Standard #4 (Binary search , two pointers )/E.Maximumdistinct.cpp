#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=150;
int freq[N],ans;
void add(char c) {
    freq[c]++;
    if(freq[c]==1)ans++;
}

void remove(char c) {
    freq[c]--;
    if(freq[c]==0)ans--;
}
void solve(){

    int n,k;cin>>n>>k;
    string s;cin>>s;
    int l=0,r=0;

    int mx=INT_MIN;
    for (;r<n;r++) {
        add(s[r]);

        while (r-l+1>k) {
            remove(s[l++]);
        }
        mx=max(mx,ans);
    }cout<<mx;


}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}