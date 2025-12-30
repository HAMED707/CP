#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    string s;cin>>s;

    stack<char>st;
    int ans=0;
    for (auto& i:s) {

        if(i=='(')st.push(i);
        else {
            if (!st.empty())st.pop(),ans++;
        }

    }cout<<ans*2;
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}