#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


int n,k,A,B;
void add(char c) {
    if(c=='a')A++;
    else B++;
}
void remove(char c) {
    if(c=='a')A--;
    else B--;
}
void solve(){
    cin>>n>>k;
    string s;cin>>s;

    int l=0,r=0;
    int mx=INT_MIN;
    for (;r<n;r++) {
        add(s[r]);

        // if(A>B)A+=k-min(k,B);
        // else B+=k-min(k,A);

        while (min(A,B)>k) {
            remove(s[l++]);
        }
        mx=max(mx,r-l+1);

    }cout<<mx;
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}