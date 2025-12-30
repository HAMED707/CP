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
    stack<char>sk;
    for (auto& i:s) {
        if (i=='(' or i=='[' or i=='{') {
            sk.push(i);
        }else {
            if(sk.empty()) {
                cout<<"no";return;
            }else {
                if(i==')' and sk.top()=='(')sk.pop();
               else if(i==']' and sk.top()=='[')sk.pop();
               else if(i=='}' and sk.top()=='{')sk.pop();
                else {
                    cout<<"no";
                    return;
                }
            }
        }
    }
    if(!sk.empty())cout<<"no";
    else cout<<"yes";
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}