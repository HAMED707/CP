#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    string s;getline(cin,s);
    set<char>st;
    for (int i=0;i<s.size();i++) {
        if(int(s[i]-'a')>=0 and int(s[i]-'a')<=25)st.insert(s[i]);
    }
    cout<<st.size();

}

int main (){
    txt
    HAMED
    solve();
    return 0;
}