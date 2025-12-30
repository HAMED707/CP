
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const ll N=1e5+5;
int n,q;
int a[N];
void solve() {
    int q;
    cin >> q;
    stack<int> st;
    while (q--) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            st.push(x);
        } else if (command == "pop") {
            st.pop();
        } else if (command == "top") {
            cout << st.top() << '\n';
        }
    }
}



int main (){

    //txt
    HAMED
    solve();
    return 0;
}