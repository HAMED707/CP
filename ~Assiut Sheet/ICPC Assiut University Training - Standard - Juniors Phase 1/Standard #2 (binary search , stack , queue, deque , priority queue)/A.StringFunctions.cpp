
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define all(X) X.begin(),X.end()

using namespace std;
const ll N=1e5+5;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string query;
        cin >> query;

        if (query == "pop_back") s.pop_back();

        else if (query == "front") cout << s.front() << '\n';

        else if (query == "back") cout << s.back() << '\n';

        else if (query == "sort") {
            int l, r;
            cin >> l >> r;
             if (l >= 1 && r <= s.size() && l <= r)  sort(s.begin() + (l - 1), s.begin() + r);
        }
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l >= 1 && r <= s.size() && l <= r)   reverse(s.begin() + (l - 1), s.begin() + r);
        }
        else if (query == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << '\n';
        }
        else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << '\n';
        }
        else if (query == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}



int main (){

    //txt
    HAMED
    solve();
    return 0;
}