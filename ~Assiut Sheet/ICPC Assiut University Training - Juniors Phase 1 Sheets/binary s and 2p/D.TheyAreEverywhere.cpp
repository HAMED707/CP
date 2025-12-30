#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=200;
map<char,int> freq;
int cnt;
void add(char x) {
    freq[x]++;
    if(freq[x]==1)cnt++;
}
void remove(char x) {
    freq[x]--;
    if(freq[x]==0)cnt--;
}

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    set<char>st(s.begin(),s.end());

    int l=0,r=0,mn=INT_MAX;
    for (int r=0;r<n;r++) {
        add(s[r]);
        while(cnt==st.size()) {
            mn=min(mn,r-l+1);
            remove(s[l]);
            l++;
        }
    }cout<<mn;
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}