
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
    queue<int> q1;

    while (q--) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            q1.push(x);
        } else if (command == "pop") {
            q1.pop();
        } else if (command == "front") {
            cout << q1.front() << '\n';
        } else if (command == "back") {
            cout << q1.back() << '\n';
        }
    }
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}