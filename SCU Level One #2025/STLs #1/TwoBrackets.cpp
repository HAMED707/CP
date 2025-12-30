#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve() {
    string s;cin>>s;
    stack<char>sk,sk2;
    int c=0;
    for (auto& i:s) {
        if (i=='(')sk.push(i);
        else if (i=='[')sk2.push(i);

        if(!sk.empty() and i==')')sk.pop(),c++;
        else if(!sk2.empty() and i==']')sk2.pop(),c++;

    }
    cout<<c<<'\n';

}

int main (){

    //txt
    HAMED
    int n;cin>>n;
    while (n--) {

        solve();
    }
    return 0;
}