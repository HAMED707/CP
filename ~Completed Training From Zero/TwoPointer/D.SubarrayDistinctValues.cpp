#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=2e5+5;
int cnt;
map<int,int>freq;
void add(int x) {
    freq[x]++;
    if(freq[x]==1)cnt++;
}
void remove(int x) {
    freq[x]--;
    if(freq[x]==0)cnt--;
}
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int sum = 0,ans=0;
    int l=0;

    for (int r = 0; r < n; r++) {
        add(a[r]);
        while (cnt>k) {
            remove(a[l++]);
        }
        ans+=r-l+1;
    }

    cout << ans << endl;

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}